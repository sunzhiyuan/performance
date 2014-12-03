typedef struct {
    float *rgb_cam;
    ushort *img;
    int width;
    int height;
} raw2rgb_arg_t;
#if defined(NEON_EMUL) || defined(ANDROID)
void *raw2rgb_neon(raw2rgb_arg_t *arg)
{
    int i, row, col;
    float *rgb_cam = arg->rgb_cam;
    ushort *img    = arg->img;
    int width      = arg->width;
    int height     = arg->height;
    uint16x4_t  u16x4Img;
    uint32x4_t  u32x4Img;
    int32x4_t  s32x4Img;
    float32x4_t f32x4Img;
    float32x4_t f32x4RgbCam[3];
    float32x4x4_t f32x4x4RgbCamTrans;
    float32x4_t f32x4_out;
    f32x4x4RgbCamTrans = vld4q_f32(rgb_cam);
    for (i = 0; i < 3; i++) {
        f32x4RgbCam[i] = f32x4x4RgbCamTrans.val[i];
    }
    for (row = 0; row < height; row++) {
        for (col = 0; col < width; col+=2, img += 8) {
            u16x4Img = vld1_u16(img);
            u32x4Img = vmovl_u16(u16x4Img);
                u16x4Img = vld1_u16(img+4);
            f32x4Img = vcvtq_f32_u32(u32x4Img);
                u32x4Img = vmovl_u16(u16x4Img);
            f32x4_out = vmulq_n_f32(f32x4RgbCam[0], vgetq_lane_f32(f32x4Img, 0));
            f32x4_out = vmlaq_n_f32(f32x4_out, f32x4RgbCam[1], vgetq_lane_f32(f32x4Img, 1));
            f32x4_out = vmlaq_n_f32(f32x4_out, f32x4RgbCam[2], vgetq_lane_f32(f32x4Img, 2));
                f32x4Img = vcvtq_f32_u32(u32x4Img);
            s32x4Img = vcvtq_s32_f32(f32x4_out);
                f32x4_out = vmulq_n_f32(f32x4RgbCam[0], vgetq_lane_f32(f32x4Img, 0));
                f32x4_out = vmlaq_n_f32(f32x4_out, f32x4RgbCam[1], vgetq_lane_f32(f32x4Img, 1));
                f32x4_out = vmlaq_n_f32(f32x4_out, f32x4RgbCam[2], vgetq_lane_f32(f32x4Img, 2));
            u16x4Img = vqmovun_s32(s32x4Img);
                s32x4Img = vcvtq_s32_f32(f32x4_out);
            vst1_u16(img, u16x4Img);
                u16x4Img = vqmovun_s32(s32x4Img);
                vst1_u16(img+4, u16x4Img);
        }
    }
    return NULL;
}
#endif
void *raw2rgb(raw2rgb_arg_t *arg)
{
    int row, col;
    float out[3];
    float *rgb_cam = arg->rgb_cam;
    ushort *img    = arg->img;
    int width      = arg->width;
    int height     = arg->height;
#if defined(NEON_EMUL) || defined(ANDROID)
    raw2rgb_neon(arg);
#else
    for (row = 0; row < height; row++) {
        for (col = 0; col < width; col++, img += 4) {
            out[0] = rgb_cam[0*4+0] * img[0] + rgb_cam[0*4+1] * img[1] + rgb_cam[0*4+2] * img[2];
            out[1] = rgb_cam[1*4+0] * img[0] + rgb_cam[1*4+1] * img[1] + rgb_cam[1*4+2] * img[2];
            out[2] = rgb_cam[2*4+0] * img[0] + rgb_cam[2*4+1] * img[1] + rgb_cam[2*4+2] * img[2];
            img[0] = CLIP((int) out[0]);
            img[1] = CLIP((int) out[1]);
            img[2] = CLIP((int) out[2]);
        }
    }
#endif
    return NULL;
}
