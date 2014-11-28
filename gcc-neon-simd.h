本 文介绍了arm-linux编译器针对ARM处理器NEON的内建Intrinsics指令的介绍，当-mfpu=neon编译选项使能时就可以在 C/C++代码内使用ARM的SIMD指令了，包括加法、乘法、比较、移位、绝对值 、极大极小极值运算、保存和加载指令等。

These built-in intrinsics for the ARM Advanced SIMD extension are available when the -mfpu=neon switch is used:

Addition

    uint32x2_t vadd_u32 (uint32x2_t, uint32x2_t)
    指令格式: vadd.i32 d0, d0, d0
    uint16x4_t vadd_u16 (uint16x4_t, uint16x4_t)
    指令格式: vadd.i16 d0, d0, d0
    uint8x8_t vadd_u8 (uint8x8_t, uint8x8_t)
    指令格式: vadd.i8 d0, d0, d0
    int32x2_t vadd_s32 (int32x2_t, int32x2_t)
    指令格式: vadd.i32 d0, d0, d0
    int16x4_t vadd_s16 (int16x4_t, int16x4_t)
    指令格式: vadd.i16 d0, d0, d0
    int8x8_t vadd_s8 (int8x8_t, int8x8_t)
    指令格式: vadd.i8 d0, d0, d0
    float32x2_t vadd_f32 (float32x2_t, float32x2_t)
    指令格式: vadd.f32 d0, d0, d0
    uint64x1_t vadd_u64 (uint64x1_t, uint64x1_t)
    int64x1_t vadd_s64 (int64x1_t, int64x1_t)
    uint32x4_t vaddq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vadd.i32 q0, q0, q0
    uint16x8_t vaddq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vadd.i16 q0, q0, q0
    uint8x16_t vaddq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vadd.i8 q0, q0, q0
    int32x4_t vaddq_s32 (int32x4_t, int32x4_t)
    指令格式: vadd.i32 q0, q0, q0
    int16x8_t vaddq_s16 (int16x8_t, int16x8_t)
    指令格式: vadd.i16 q0, q0, q0
    int8x16_t vaddq_s8 (int8x16_t, int8x16_t)
    指令格式: vadd.i8 q0, q0, q0
    uint64x2_t vaddq_u64 (uint64x2_t, uint64x2_t)
    指令格式: vadd.i64 q0, q0, q0
    int64x2_t vaddq_s64 (int64x2_t, int64x2_t)
    指令格式: vadd.i64 q0, q0, q0
    float32x4_t vaddq_f32 (float32x4_t, float32x4_t)
    指令格式: vadd.f32 q0, q0, q0
    uint64x2_t vaddl_u32 (uint32x2_t, uint32x2_t)
    指令格式: vaddl.u32 q0, d0, d0
    uint32x4_t vaddl_u16 (uint16x4_t, uint16x4_t)
    指令格式: vaddl.u16 q0, d0, d0
    uint16x8_t vaddl_u8 (uint8x8_t, uint8x8_t)
    指令格式: vaddl.u8 q0, d0, d0
    int64x2_t vaddl_s32 (int32x2_t, int32x2_t)
    指令格式: vaddl.s32 q0, d0, d0
    int32x4_t vaddl_s16 (int16x4_t, int16x4_t)
    指令格式: vaddl.s16 q0, d0, d0
    int16x8_t vaddl_s8 (int8x8_t, int8x8_t)
    指令格式: vaddl.s8 q0, d0, d0
    uint64x2_t vaddw_u32 (uint64x2_t, uint32x2_t)
    指令格式: vaddw.u32 q0, q0, d0
    uint32x4_t vaddw_u16 (uint32x4_t, uint16x4_t)
    指令格式: vaddw.u16 q0, q0, d0
    uint16x8_t vaddw_u8 (uint16x8_t, uint8x8_t)
    指令格式: vaddw.u8 q0, q0, d0
    int64x2_t vaddw_s32 (int64x2_t, int32x2_t)
    指令格式: vaddw.s32 q0, q0, d0
    int32x4_t vaddw_s16 (int32x4_t, int16x4_t)
    指令格式: vaddw.s16 q0, q0, d0
    int16x8_t vaddw_s8 (int16x8_t, int8x8_t)
    指令格式: vaddw.s8 q0, q0, d0
    uint32x2_t vhadd_u32 (uint32x2_t, uint32x2_t)
    指令格式: vhadd.u32 d0, d0, d0
    uint16x4_t vhadd_u16 (uint16x4_t, uint16x4_t)
    指令格式: vhadd.u16 d0, d0, d0
    uint8x8_t vhadd_u8 (uint8x8_t, uint8x8_t)
    指令格式: vhadd.u8 d0, d0, d0
    int32x2_t vhadd_s32 (int32x2_t, int32x2_t)
    指令格式: vhadd.s32 d0, d0, d0
    int16x4_t vhadd_s16 (int16x4_t, int16x4_t)
    指令格式: vhadd.s16 d0, d0, d0
    int8x8_t vhadd_s8 (int8x8_t, int8x8_t)
    指令格式: vhadd.s8 d0, d0, d0
    uint32x4_t vhaddq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vhadd.u32 q0, q0, q0
    uint16x8_t vhaddq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vhadd.u16 q0, q0, q0
    uint8x16_t vhaddq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vhadd.u8 q0, q0, q0
    int32x4_t vhaddq_s32 (int32x4_t, int32x4_t)
    指令格式: vhadd.s32 q0, q0, q0
    int16x8_t vhaddq_s16 (int16x8_t, int16x8_t)
    指令格式: vhadd.s16 q0, q0, q0
    int8x16_t vhaddq_s8 (int8x16_t, int8x16_t)
    指令格式: vhadd.s8 q0, q0, q0
    uint32x2_t vrhadd_u32 (uint32x2_t, uint32x2_t)
    指令格式: vrhadd.u32 d0, d0, d0
    uint16x4_t vrhadd_u16 (uint16x4_t, uint16x4_t)
    指令格式: vrhadd.u16 d0, d0, d0
    uint8x8_t vrhadd_u8 (uint8x8_t, uint8x8_t)
    指令格式: vrhadd.u8 d0, d0, d0
    int32x2_t vrhadd_s32 (int32x2_t, int32x2_t)
    指令格式: vrhadd.s32 d0, d0, d0
    int16x4_t vrhadd_s16 (int16x4_t, int16x4_t)
    指令格式: vrhadd.s16 d0, d0, d0
    int8x8_t vrhadd_s8 (int8x8_t, int8x8_t)
    指令格式: vrhadd.s8 d0, d0, d0
    uint32x4_t vrhaddq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vrhadd.u32 q0, q0, q0
    uint16x8_t vrhaddq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vrhadd.u16 q0, q0, q0
    uint8x16_t vrhaddq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vrhadd.u8 q0, q0, q0
    int32x4_t vrhaddq_s32 (int32x4_t, int32x4_t)
    指令格式: vrhadd.s32 q0, q0, q0
    int16x8_t vrhaddq_s16 (int16x8_t, int16x8_t)
    指令格式: vrhadd.s16 q0, q0, q0
    int8x16_t vrhaddq_s8 (int8x16_t, int8x16_t)
    指令格式: vrhadd.s8 q0, q0, q0
    uint32x2_t vqadd_u32 (uint32x2_t, uint32x2_t)
    指令格式: vqadd.u32 d0, d0, d0
    uint16x4_t vqadd_u16 (uint16x4_t, uint16x4_t)
    指令格式: vqadd.u16 d0, d0, d0
    uint8x8_t vqadd_u8 (uint8x8_t, uint8x8_t)
    指令格式: vqadd.u8 d0, d0, d0
    int32x2_t vqadd_s32 (int32x2_t, int32x2_t)
    指令格式: vqadd.s32 d0, d0, d0
    int16x4_t vqadd_s16 (int16x4_t, int16x4_t)
    指令格式: vqadd.s16 d0, d0, d0
    int8x8_t vqadd_s8 (int8x8_t, int8x8_t)
    指令格式: vqadd.s8 d0, d0, d0
    uint64x1_t vqadd_u64 (uint64x1_t, uint64x1_t)
    指令格式: vqadd.u64 d0, d0, d0
    int64x1_t vqadd_s64 (int64x1_t, int64x1_t)
    指令格式: vqadd.s64 d0, d0, d0
    uint32x4_t vqaddq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vqadd.u32 q0, q0, q0
    uint16x8_t vqaddq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vqadd.u16 q0, q0, q0
    uint8x16_t vqaddq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vqadd.u8 q0, q0, q0
    int32x4_t vqaddq_s32 (int32x4_t, int32x4_t)
    指令格式: vqadd.s32 q0, q0, q0
    int16x8_t vqaddq_s16 (int16x8_t, int16x8_t)
    指令格式: vqadd.s16 q0, q0, q0
    int8x16_t vqaddq_s8 (int8x16_t, int8x16_t)
    指令格式: vqadd.s8 q0, q0, q0
    uint64x2_t vqaddq_u64 (uint64x2_t, uint64x2_t)
    指令格式: vqadd.u64 q0, q0, q0
    int64x2_t vqaddq_s64 (int64x2_t, int64x2_t)
    指令格式: vqadd.s64 q0, q0, q0
    uint32x2_t vaddhn_u64 (uint64x2_t, uint64x2_t)
    指令格式: vaddhn.i64 d0, q0, q0
    uint16x4_t vaddhn_u32 (uint32x4_t, uint32x4_t)
    指令格式: vaddhn.i32 d0, q0, q0
    uint8x8_t vaddhn_u16 (uint16x8_t, uint16x8_t)
    指令格式: vaddhn.i16 d0, q0, q0
    int32x2_t vaddhn_s64 (int64x2_t, int64x2_t)
    指令格式: vaddhn.i64 d0, q0, q0
    int16x4_t vaddhn_s32 (int32x4_t, int32x4_t)
    指令格式: vaddhn.i32 d0, q0, q0
    int8x8_t vaddhn_s16 (int16x8_t, int16x8_t)
    指令格式: vaddhn.i16 d0, q0, q0
    uint32x2_t vraddhn_u64 (uint64x2_t, uint64x2_t)
    指令格式: vraddhn.i64 d0, q0, q0
    uint16x4_t vraddhn_u32 (uint32x4_t, uint32x4_t)
    指令格式: vraddhn.i32 d0, q0, q0
    uint8x8_t vraddhn_u16 (uint16x8_t, uint16x8_t)
    指令格式: vraddhn.i16 d0, q0, q0
    int32x2_t vraddhn_s64 (int64x2_t, int64x2_t)
    指令格式: vraddhn.i64 d0, q0, q0
    int16x4_t vraddhn_s32 (int32x4_t, int32x4_t)
    指令格式: vraddhn.i32 d0, q0, q0
    int8x8_t vraddhn_s16 (int16x8_t, int16x8_t)
    指令格式: vraddhn.i16 d0, q0, q0 

.2 Multiplication

    uint32x2_t vmul_u32 (uint32x2_t, uint32x2_t)
    指令格式: vmul.i32 d0, d0, d0
    uint16x4_t vmul_u16 (uint16x4_t, uint16x4_t)
    指令格式: vmul.i16 d0, d0, d0
    uint8x8_t vmul_u8 (uint8x8_t, uint8x8_t)
    指令格式: vmul.i8 d0, d0, d0
    int32x2_t vmul_s32 (int32x2_t, int32x2_t)
    指令格式: vmul.i32 d0, d0, d0
    int16x4_t vmul_s16 (int16x4_t, int16x4_t)
    指令格式: vmul.i16 d0, d0, d0
    int8x8_t vmul_s8 (int8x8_t, int8x8_t)
    指令格式: vmul.i8 d0, d0, d0
    float32x2_t vmul_f32 (float32x2_t, float32x2_t)
    指令格式: vmul.f32 d0, d0, d0
    poly8x8_t vmul_p8 (poly8x8_t, poly8x8_t)
    指令格式: vmul.p8 d0, d0, d0
    uint32x4_t vmulq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vmul.i32 q0, q0, q0
    uint16x8_t vmulq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vmul.i16 q0, q0, q0
    uint8x16_t vmulq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vmul.i8 q0, q0, q0
    int32x4_t vmulq_s32 (int32x4_t, int32x4_t)
    指令格式: vmul.i32 q0, q0, q0
    int16x8_t vmulq_s16 (int16x8_t, int16x8_t)
    指令格式: vmul.i16 q0, q0, q0
    int8x16_t vmulq_s8 (int8x16_t, int8x16_t)
    指令格式: vmul.i8 q0, q0, q0
    float32x4_t vmulq_f32 (float32x4_t, float32x4_t)
    指令格式: vmul.f32 q0, q0, q0
    poly8x16_t vmulq_p8 (poly8x16_t, poly8x16_t)
    指令格式: vmul.p8 q0, q0, q0
    int32x2_t vqdmulh_s32 (int32x2_t, int32x2_t)
    指令格式: vqdmulh.s32 d0, d0, d0
    int16x4_t vqdmulh_s16 (int16x4_t, int16x4_t)
    指令格式: vqdmulh.s16 d0, d0, d0
    int32x4_t vqdmulhq_s32 (int32x4_t, int32x4_t)
    指令格式: vqdmulh.s32 q0, q0, q0
    int16x8_t vqdmulhq_s16 (int16x8_t, int16x8_t)
    指令格式: vqdmulh.s16 q0, q0, q0
    int32x2_t vqrdmulh_s32 (int32x2_t, int32x2_t)
    指令格式: vqrdmulh.s32 d0, d0, d0
    int16x4_t vqrdmulh_s16 (int16x4_t, int16x4_t)
    指令格式: vqrdmulh.s16 d0, d0, d0
    int32x4_t vqrdmulhq_s32 (int32x4_t, int32x4_t)
    指令格式: vqrdmulh.s32 q0, q0, q0
    int16x8_t vqrdmulhq_s16 (int16x8_t, int16x8_t)
    指令格式: vqrdmulh.s16 q0, q0, q0
    uint64x2_t vmull_u32 (uint32x2_t, uint32x2_t)
    指令格式: vmull.u32 q0, d0, d0
    uint32x4_t vmull_u16 (uint16x4_t, uint16x4_t)
    指令格式: vmull.u16 q0, d0, d0
    uint16x8_t vmull_u8 (uint8x8_t, uint8x8_t)
    指令格式: vmull.u8 q0, d0, d0
    int64x2_t vmull_s32 (int32x2_t, int32x2_t)
    指令格式: vmull.s32 q0, d0, d0
    int32x4_t vmull_s16 (int16x4_t, int16x4_t)
    指令格式: vmull.s16 q0, d0, d0
    int16x8_t vmull_s8 (int8x8_t, int8x8_t)
    指令格式: vmull.s8 q0, d0, d0
    poly16x8_t vmull_p8 (poly8x8_t, poly8x8_t)
    指令格式: vmull.p8 q0, d0, d0
    int64x2_t vqdmull_s32 (int32x2_t, int32x2_t)
    指令格式: vqdmull.s32 q0, d0, d0
    int32x4_t vqdmull_s16 (int16x4_t, int16x4_t)
    指令格式: vqdmull.s16 q0, d0, d0 

.3 Multiply-accumulate

    uint32x2_t vmla_u32 (uint32x2_t, uint32x2_t, uint32x2_t)
    指令格式: vmla.i32 d0, d0, d0
    uint16x4_t vmla_u16 (uint16x4_t, uint16x4_t, uint16x4_t)
    指令格式: vmla.i16 d0, d0, d0
    uint8x8_t vmla_u8 (uint8x8_t, uint8x8_t, uint8x8_t)
    指令格式: vmla.i8 d0, d0, d0
    int32x2_t vmla_s32 (int32x2_t, int32x2_t, int32x2_t)
    指令格式: vmla.i32 d0, d0, d0
    int16x4_t vmla_s16 (int16x4_t, int16x4_t, int16x4_t)
    指令格式: vmla.i16 d0, d0, d0
    int8x8_t vmla_s8 (int8x8_t, int8x8_t, int8x8_t)
    指令格式: vmla.i8 d0, d0, d0
    float32x2_t vmla_f32 (float32x2_t, float32x2_t, float32x2_t)
    指令格式: vmla.f32 d0, d0, d0
    uint32x4_t vmlaq_u32 (uint32x4_t, uint32x4_t, uint32x4_t)
    指令格式: vmla.i32 q0, q0, q0
    uint16x8_t vmlaq_u16 (uint16x8_t, uint16x8_t, uint16x8_t)
    指令格式: vmla.i16 q0, q0, q0
    uint8x16_t vmlaq_u8 (uint8x16_t, uint8x16_t, uint8x16_t)
    指令格式: vmla.i8 q0, q0, q0
    int32x4_t vmlaq_s32 (int32x4_t, int32x4_t, int32x4_t)
    指令格式: vmla.i32 q0, q0, q0
    int16x8_t vmlaq_s16 (int16x8_t, int16x8_t, int16x8_t)
    指令格式: vmla.i16 q0, q0, q0
    int8x16_t vmlaq_s8 (int8x16_t, int8x16_t, int8x16_t)
    指令格式: vmla.i8 q0, q0, q0
    float32x4_t vmlaq_f32 (float32x4_t, float32x4_t, float32x4_t)
    指令格式: vmla.f32 q0, q0, q0
    uint64x2_t vmlal_u32 (uint64x2_t, uint32x2_t, uint32x2_t)
    指令格式: vmlal.u32 q0, d0, d0
    uint32x4_t vmlal_u16 (uint32x4_t, uint16x4_t, uint16x4_t)
    指令格式: vmlal.u16 q0, d0, d0
    uint16x8_t vmlal_u8 (uint16x8_t, uint8x8_t, uint8x8_t)
    指令格式: vmlal.u8 q0, d0, d0
    int64x2_t vmlal_s32 (int64x2_t, int32x2_t, int32x2_t)
    指令格式: vmlal.s32 q0, d0, d0
    int32x4_t vmlal_s16 (int32x4_t, int16x4_t, int16x4_t)
    指令格式: vmlal.s16 q0, d0, d0
    int16x8_t vmlal_s8 (int16x8_t, int8x8_t, int8x8_t)
    指令格式: vmlal.s8 q0, d0, d0
    int64x2_t vqdmlal_s32 (int64x2_t, int32x2_t, int32x2_t)
    指令格式: vqdmlal.s32 q0, d0, d0
    int32x4_t vqdmlal_s16 (int32x4_t, int16x4_t, int16x4_t)
    指令格式: vqdmlal.s16 q0, d0, d0 

.4 Multiply-subtract

    uint32x2_t vmls_u32 (uint32x2_t, uint32x2_t, uint32x2_t)
    指令格式: vmls.i32 d0, d0, d0
    uint16x4_t vmls_u16 (uint16x4_t, uint16x4_t, uint16x4_t)
    指令格式: vmls.i16 d0, d0, d0
    uint8x8_t vmls_u8 (uint8x8_t, uint8x8_t, uint8x8_t)
    指令格式: vmls.i8 d0, d0, d0
    int32x2_t vmls_s32 (int32x2_t, int32x2_t, int32x2_t)
    指令格式: vmls.i32 d0, d0, d0
    int16x4_t vmls_s16 (int16x4_t, int16x4_t, int16x4_t)
    指令格式: vmls.i16 d0, d0, d0
    int8x8_t vmls_s8 (int8x8_t, int8x8_t, int8x8_t)
    指令格式: vmls.i8 d0, d0, d0
    float32x2_t vmls_f32 (float32x2_t, float32x2_t, float32x2_t)
    指令格式: vmls.f32 d0, d0, d0
    uint32x4_t vmlsq_u32 (uint32x4_t, uint32x4_t, uint32x4_t)
    指令格式: vmls.i32 q0, q0, q0
    uint16x8_t vmlsq_u16 (uint16x8_t, uint16x8_t, uint16x8_t)
    指令格式: vmls.i16 q0, q0, q0
    uint8x16_t vmlsq_u8 (uint8x16_t, uint8x16_t, uint8x16_t)
    指令格式: vmls.i8 q0, q0, q0
    int32x4_t vmlsq_s32 (int32x4_t, int32x4_t, int32x4_t)
    指令格式: vmls.i32 q0, q0, q0
    int16x8_t vmlsq_s16 (int16x8_t, int16x8_t, int16x8_t)
    指令格式: vmls.i16 q0, q0, q0
    int8x16_t vmlsq_s8 (int8x16_t, int8x16_t, int8x16_t)
    指令格式: vmls.i8 q0, q0, q0
    float32x4_t vmlsq_f32 (float32x4_t, float32x4_t, float32x4_t)
    指令格式: vmls.f32 q0, q0, q0
    uint64x2_t vmlsl_u32 (uint64x2_t, uint32x2_t, uint32x2_t)
    指令格式: vmlsl.u32 q0, d0, d0
    uint32x4_t vmlsl_u16 (uint32x4_t, uint16x4_t, uint16x4_t)
    指令格式: vmlsl.u16 q0, d0, d0
    uint16x8_t vmlsl_u8 (uint16x8_t, uint8x8_t, uint8x8_t)
    指令格式: vmlsl.u8 q0, d0, d0
    int64x2_t vmlsl_s32 (int64x2_t, int32x2_t, int32x2_t)
    指令格式: vmlsl.s32 q0, d0, d0
    int32x4_t vmlsl_s16 (int32x4_t, int16x4_t, int16x4_t)
    指令格式: vmlsl.s16 q0, d0, d0
    int16x8_t vmlsl_s8 (int16x8_t, int8x8_t, int8x8_t)
    指令格式: vmlsl.s8 q0, d0, d0
    int64x2_t vqdmlsl_s32 (int64x2_t, int32x2_t, int32x2_t)
    指令格式: vqdmlsl.s32 q0, d0, d0
    int32x4_t vqdmlsl_s16 (int32x4_t, int16x4_t, int16x4_t)
    指令格式: vqdmlsl.s16 q0, d0, d0 

.5 Subtraction

    uint32x2_t vsub_u32 (uint32x2_t, uint32x2_t)
    指令格式: vsub.i32 d0, d0, d0
    uint16x4_t vsub_u16 (uint16x4_t, uint16x4_t)
    指令格式: vsub.i16 d0, d0, d0
    uint8x8_t vsub_u8 (uint8x8_t, uint8x8_t)
    指令格式: vsub.i8 d0, d0, d0
    int32x2_t vsub_s32 (int32x2_t, int32x2_t)
    指令格式: vsub.i32 d0, d0, d0
    int16x4_t vsub_s16 (int16x4_t, int16x4_t)
    指令格式: vsub.i16 d0, d0, d0
    int8x8_t vsub_s8 (int8x8_t, int8x8_t)
    指令格式: vsub.i8 d0, d0, d0
    float32x2_t vsub_f32 (float32x2_t, float32x2_t)
    指令格式: vsub.f32 d0, d0, d0
    uint64x1_t vsub_u64 (uint64x1_t, uint64x1_t)
    int64x1_t vsub_s64 (int64x1_t, int64x1_t)
    uint32x4_t vsubq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vsub.i32 q0, q0, q0
    uint16x8_t vsubq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vsub.i16 q0, q0, q0
    uint8x16_t vsubq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vsub.i8 q0, q0, q0
    int32x4_t vsubq_s32 (int32x4_t, int32x4_t)
    指令格式: vsub.i32 q0, q0, q0
    int16x8_t vsubq_s16 (int16x8_t, int16x8_t)
    指令格式: vsub.i16 q0, q0, q0
    int8x16_t vsubq_s8 (int8x16_t, int8x16_t)
    指令格式: vsub.i8 q0, q0, q0
    uint64x2_t vsubq_u64 (uint64x2_t, uint64x2_t)
    指令格式: vsub.i64 q0, q0, q0
    int64x2_t vsubq_s64 (int64x2_t, int64x2_t)
    指令格式: vsub.i64 q0, q0, q0
    float32x4_t vsubq_f32 (float32x4_t, float32x4_t)
    指令格式: vsub.f32 q0, q0, q0
    uint64x2_t vsubl_u32 (uint32x2_t, uint32x2_t)
    指令格式: vsubl.u32 q0, d0, d0
    uint32x4_t vsubl_u16 (uint16x4_t, uint16x4_t)
    指令格式: vsubl.u16 q0, d0, d0
    uint16x8_t vsubl_u8 (uint8x8_t, uint8x8_t)
    指令格式: vsubl.u8 q0, d0, d0
    int64x2_t vsubl_s32 (int32x2_t, int32x2_t)
    指令格式: vsubl.s32 q0, d0, d0
    int32x4_t vsubl_s16 (int16x4_t, int16x4_t)
    指令格式: vsubl.s16 q0, d0, d0
    int16x8_t vsubl_s8 (int8x8_t, int8x8_t)
    指令格式: vsubl.s8 q0, d0, d0
    uint64x2_t vsubw_u32 (uint64x2_t, uint32x2_t)
    指令格式: vsubw.u32 q0, q0, d0
    uint32x4_t vsubw_u16 (uint32x4_t, uint16x4_t)
    指令格式: vsubw.u16 q0, q0, d0
    uint16x8_t vsubw_u8 (uint16x8_t, uint8x8_t)
    指令格式: vsubw.u8 q0, q0, d0
    int64x2_t vsubw_s32 (int64x2_t, int32x2_t)
    指令格式: vsubw.s32 q0, q0, d0
    int32x4_t vsubw_s16 (int32x4_t, int16x4_t)
    指令格式: vsubw.s16 q0, q0, d0
    int16x8_t vsubw_s8 (int16x8_t, int8x8_t)
    指令格式: vsubw.s8 q0, q0, d0
    uint32x2_t vhsub_u32 (uint32x2_t, uint32x2_t)
    指令格式: vhsub.u32 d0, d0, d0
    uint16x4_t vhsub_u16 (uint16x4_t, uint16x4_t)
    指令格式: vhsub.u16 d0, d0, d0
    uint8x8_t vhsub_u8 (uint8x8_t, uint8x8_t)
    指令格式: vhsub.u8 d0, d0, d0
    int32x2_t vhsub_s32 (int32x2_t, int32x2_t)
    指令格式: vhsub.s32 d0, d0, d0
    int16x4_t vhsub_s16 (int16x4_t, int16x4_t)
    指令格式: vhsub.s16 d0, d0, d0
    int8x8_t vhsub_s8 (int8x8_t, int8x8_t)
    指令格式: vhsub.s8 d0, d0, d0
    uint32x4_t vhsubq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vhsub.u32 q0, q0, q0
    uint16x8_t vhsubq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vhsub.u16 q0, q0, q0
    uint8x16_t vhsubq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vhsub.u8 q0, q0, q0
    int32x4_t vhsubq_s32 (int32x4_t, int32x4_t)
    指令格式: vhsub.s32 q0, q0, q0
    int16x8_t vhsubq_s16 (int16x8_t, int16x8_t)
    指令格式: vhsub.s16 q0, q0, q0
    int8x16_t vhsubq_s8 (int8x16_t, int8x16_t)
    指令格式: vhsub.s8 q0, q0, q0
    uint32x2_t vqsub_u32 (uint32x2_t, uint32x2_t)
    指令格式: vqsub.u32 d0, d0, d0
    uint16x4_t vqsub_u16 (uint16x4_t, uint16x4_t)
    指令格式: vqsub.u16 d0, d0, d0
    uint8x8_t vqsub_u8 (uint8x8_t, uint8x8_t)
    指令格式: vqsub.u8 d0, d0, d0
    int32x2_t vqsub_s32 (int32x2_t, int32x2_t)
    指令格式: vqsub.s32 d0, d0, d0
    int16x4_t vqsub_s16 (int16x4_t, int16x4_t)
    指令格式: vqsub.s16 d0, d0, d0
    int8x8_t vqsub_s8 (int8x8_t, int8x8_t)
    指令格式: vqsub.s8 d0, d0, d0
    uint64x1_t vqsub_u64 (uint64x1_t, uint64x1_t)
    指令格式: vqsub.u64 d0, d0, d0
    int64x1_t vqsub_s64 (int64x1_t, int64x1_t)
    指令格式: vqsub.s64 d0, d0, d0
    uint32x4_t vqsubq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vqsub.u32 q0, q0, q0
    uint16x8_t vqsubq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vqsub.u16 q0, q0, q0
    uint8x16_t vqsubq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vqsub.u8 q0, q0, q0
    int32x4_t vqsubq_s32 (int32x4_t, int32x4_t)
    指令格式: vqsub.s32 q0, q0, q0
    int16x8_t vqsubq_s16 (int16x8_t, int16x8_t)
    指令格式: vqsub.s16 q0, q0, q0
    int8x16_t vqsubq_s8 (int8x16_t, int8x16_t)
    指令格式: vqsub.s8 q0, q0, q0
    uint64x2_t vqsubq_u64 (uint64x2_t, uint64x2_t)
    指令格式: vqsub.u64 q0, q0, q0
    int64x2_t vqsubq_s64 (int64x2_t, int64x2_t)
    指令格式: vqsub.s64 q0, q0, q0
    uint32x2_t vsubhn_u64 (uint64x2_t, uint64x2_t)
    指令格式: vsubhn.i64 d0, q0, q0
    uint16x4_t vsubhn_u32 (uint32x4_t, uint32x4_t)
    指令格式: vsubhn.i32 d0, q0, q0
    uint8x8_t vsubhn_u16 (uint16x8_t, uint16x8_t)
    指令格式: vsubhn.i16 d0, q0, q0
    int32x2_t vsubhn_s64 (int64x2_t, int64x2_t)
    指令格式: vsubhn.i64 d0, q0, q0
    int16x4_t vsubhn_s32 (int32x4_t, int32x4_t)
    指令格式: vsubhn.i32 d0, q0, q0
    int8x8_t vsubhn_s16 (int16x8_t, int16x8_t)
    指令格式: vsubhn.i16 d0, q0, q0
    uint32x2_t vrsubhn_u64 (uint64x2_t, uint64x2_t)
    指令格式: vrsubhn.i64 d0, q0, q0
    uint16x4_t vrsubhn_u32 (uint32x4_t, uint32x4_t)
    指令格式: vrsubhn.i32 d0, q0, q0
    uint8x8_t vrsubhn_u16 (uint16x8_t, uint16x8_t)
    指令格式: vrsubhn.i16 d0, q0, q0
    int32x2_t vrsubhn_s64 (int64x2_t, int64x2_t)
    指令格式: vrsubhn.i64 d0, q0, q0
    int16x4_t vrsubhn_s32 (int32x4_t, int32x4_t)
    指令格式: vrsubhn.i32 d0, q0, q0
    int8x8_t vrsubhn_s16 (int16x8_t, int16x8_t)
    指令格式: vrsubhn.i16 d0, q0, q0 

.6 Comparison (equal-to)

    uint32x2_t vceq_u32 (uint32x2_t, uint32x2_t)
    指令格式: vceq.i32 d0, d0, d0
    uint16x4_t vceq_u16 (uint16x4_t, uint16x4_t)
    指令格式: vceq.i16 d0, d0, d0
    uint8x8_t vceq_u8 (uint8x8_t, uint8x8_t)
    指令格式: vceq.i8 d0, d0, d0
    uint32x2_t vceq_s32 (int32x2_t, int32x2_t)
    指令格式: vceq.i32 d0, d0, d0
    uint16x4_t vceq_s16 (int16x4_t, int16x4_t)
    指令格式: vceq.i16 d0, d0, d0
    uint8x8_t vceq_s8 (int8x8_t, int8x8_t)
    指令格式: vceq.i8 d0, d0, d0
    uint32x2_t vceq_f32 (float32x2_t, float32x2_t)
    指令格式: vceq.f32 d0, d0, d0
    uint8x8_t vceq_p8 (poly8x8_t, poly8x8_t)
    指令格式: vceq.i8 d0, d0, d0
    uint32x4_t vceqq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vceq.i32 q0, q0, q0
    uint16x8_t vceqq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vceq.i16 q0, q0, q0
    uint8x16_t vceqq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vceq.i8 q0, q0, q0
    uint32x4_t vceqq_s32 (int32x4_t, int32x4_t)
    指令格式: vceq.i32 q0, q0, q0
    uint16x8_t vceqq_s16 (int16x8_t, int16x8_t)
    指令格式: vceq.i16 q0, q0, q0
    uint8x16_t vceqq_s8 (int8x16_t, int8x16_t)
    指令格式: vceq.i8 q0, q0, q0
    uint32x4_t vceqq_f32 (float32x4_t, float32x4_t)
    指令格式: vceq.f32 q0, q0, q0
    uint8x16_t vceqq_p8 (poly8x16_t, poly8x16_t)
    指令格式: vceq.i8 q0, q0, q0 

.7 Comparison (greater-than-or-equal-to)

    uint32x2_t vcge_u32 (uint32x2_t, uint32x2_t)
    指令格式: vcge.u32 d0, d0, d0
    uint16x4_t vcge_u16 (uint16x4_t, uint16x4_t)
    指令格式: vcge.u16 d0, d0, d0
    uint8x8_t vcge_u8 (uint8x8_t, uint8x8_t)
    指令格式: vcge.u8 d0, d0, d0
    uint32x2_t vcge_s32 (int32x2_t, int32x2_t)
    指令格式: vcge.s32 d0, d0, d0
    uint16x4_t vcge_s16 (int16x4_t, int16x4_t)
    指令格式: vcge.s16 d0, d0, d0
    uint8x8_t vcge_s8 (int8x8_t, int8x8_t)
    指令格式: vcge.s8 d0, d0, d0
    uint32x2_t vcge_f32 (float32x2_t, float32x2_t)
    指令格式: vcge.f32 d0, d0, d0
    uint32x4_t vcgeq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vcge.u32 q0, q0, q0
    uint16x8_t vcgeq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vcge.u16 q0, q0, q0
    uint8x16_t vcgeq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vcge.u8 q0, q0, q0
    uint32x4_t vcgeq_s32 (int32x4_t, int32x4_t)
    指令格式: vcge.s32 q0, q0, q0
    uint16x8_t vcgeq_s16 (int16x8_t, int16x8_t)
    指令格式: vcge.s16 q0, q0, q0
    uint8x16_t vcgeq_s8 (int8x16_t, int8x16_t)
    指令格式: vcge.s8 q0, q0, q0
    uint32x4_t vcgeq_f32 (float32x4_t, float32x4_t)
    指令格式: vcge.f32 q0, q0, q0 

.8 Comparison (less-than-or-equal-to)

    uint32x2_t vcle_u32 (uint32x2_t, uint32x2_t)
    指令格式: vcge.u32 d0, d0, d0
    uint16x4_t vcle_u16 (uint16x4_t, uint16x4_t)
    指令格式: vcge.u16 d0, d0, d0
    uint8x8_t vcle_u8 (uint8x8_t, uint8x8_t)
    指令格式: vcge.u8 d0, d0, d0
    uint32x2_t vcle_s32 (int32x2_t, int32x2_t)
    指令格式: vcge.s32 d0, d0, d0
    uint16x4_t vcle_s16 (int16x4_t, int16x4_t)
    指令格式: vcge.s16 d0, d0, d0
    uint8x8_t vcle_s8 (int8x8_t, int8x8_t)
    指令格式: vcge.s8 d0, d0, d0
    uint32x2_t vcle_f32 (float32x2_t, float32x2_t)
    指令格式: vcge.f32 d0, d0, d0
    uint32x4_t vcleq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vcge.u32 q0, q0, q0
    uint16x8_t vcleq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vcge.u16 q0, q0, q0
    uint8x16_t vcleq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vcge.u8 q0, q0, q0
    uint32x4_t vcleq_s32 (int32x4_t, int32x4_t)
    指令格式: vcge.s32 q0, q0, q0
    uint16x8_t vcleq_s16 (int16x8_t, int16x8_t)
    指令格式: vcge.s16 q0, q0, q0
    uint8x16_t vcleq_s8 (int8x16_t, int8x16_t)
    指令格式: vcge.s8 q0, q0, q0
    uint32x4_t vcleq_f32 (float32x4_t, float32x4_t)
    指令格式: vcge.f32 q0, q0, q0 

.9 Comparison (greater-than)

    uint32x2_t vcgt_u32 (uint32x2_t, uint32x2_t)
    指令格式: vcgt.u32 d0, d0, d0
    uint16x4_t vcgt_u16 (uint16x4_t, uint16x4_t)
    指令格式: vcgt.u16 d0, d0, d0
    uint8x8_t vcgt_u8 (uint8x8_t, uint8x8_t)
    指令格式: vcgt.u8 d0, d0, d0
    uint32x2_t vcgt_s32 (int32x2_t, int32x2_t)
    指令格式: vcgt.s32 d0, d0, d0
    uint16x4_t vcgt_s16 (int16x4_t, int16x4_t)
    指令格式: vcgt.s16 d0, d0, d0
    uint8x8_t vcgt_s8 (int8x8_t, int8x8_t)
    指令格式: vcgt.s8 d0, d0, d0
    uint32x2_t vcgt_f32 (float32x2_t, float32x2_t)
    指令格式: vcgt.f32 d0, d0, d0
    uint32x4_t vcgtq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vcgt.u32 q0, q0, q0
    uint16x8_t vcgtq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vcgt.u16 q0, q0, q0
    uint8x16_t vcgtq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vcgt.u8 q0, q0, q0
    uint32x4_t vcgtq_s32 (int32x4_t, int32x4_t)
    指令格式: vcgt.s32 q0, q0, q0
    uint16x8_t vcgtq_s16 (int16x8_t, int16x8_t)
    指令格式: vcgt.s16 q0, q0, q0
    uint8x16_t vcgtq_s8 (int8x16_t, int8x16_t)
    指令格式: vcgt.s8 q0, q0, q0
    uint32x4_t vcgtq_f32 (float32x4_t, float32x4_t)
    指令格式: vcgt.f32 q0, q0, q0 

0 Comparison (less-than)

    uint32x2_t vclt_u32 (uint32x2_t, uint32x2_t)
    指令格式: vcgt.u32 d0, d0, d0
    uint16x4_t vclt_u16 (uint16x4_t, uint16x4_t)
    指令格式: vcgt.u16 d0, d0, d0
    uint8x8_t vclt_u8 (uint8x8_t, uint8x8_t)
    指令格式: vcgt.u8 d0, d0, d0
    uint32x2_t vclt_s32 (int32x2_t, int32x2_t)
    指令格式: vcgt.s32 d0, d0, d0
    uint16x4_t vclt_s16 (int16x4_t, int16x4_t)
    指令格式: vcgt.s16 d0, d0, d0
    uint8x8_t vclt_s8 (int8x8_t, int8x8_t)
    指令格式: vcgt.s8 d0, d0, d0
    uint32x2_t vclt_f32 (float32x2_t, float32x2_t)
    指令格式: vcgt.f32 d0, d0, d0
    uint32x4_t vcltq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vcgt.u32 q0, q0, q0
    uint16x8_t vcltq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vcgt.u16 q0, q0, q0
    uint8x16_t vcltq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vcgt.u8 q0, q0, q0
    uint32x4_t vcltq_s32 (int32x4_t, int32x4_t)
    指令格式: vcgt.s32 q0, q0, q0
    uint16x8_t vcltq_s16 (int16x8_t, int16x8_t)
    指令格式: vcgt.s16 q0, q0, q0
    uint8x16_t vcltq_s8 (int8x16_t, int8x16_t)
    指令格式: vcgt.s8 q0, q0, q0
    uint32x4_t vcltq_f32 (float32x4_t, float32x4_t)
    指令格式: vcgt.f32 q0, q0, q0 

1 Comparison (absolute greater-than-or-equal-to)

    uint32x2_t vcage_f32 (float32x2_t, float32x2_t)
    指令格式: vacge.f32 d0, d0, d0
    uint32x4_t vcageq_f32 (float32x4_t, float32x4_t)
    指令格式: vacge.f32 q0, q0, q0 

2 Comparison (absolute less-than-or-equal-to)

    uint32x2_t vcale_f32 (float32x2_t, float32x2_t)
    指令格式: vacge.f32 d0, d0, d0
    uint32x4_t vcaleq_f32 (float32x4_t, float32x4_t)
    指令格式: vacge.f32 q0, q0, q0 

3 Comparison (absolute greater-than)

    uint32x2_t vcagt_f32 (float32x2_t, float32x2_t)
    指令格式: vacgt.f32 d0, d0, d0
    uint32x4_t vcagtq_f32 (float32x4_t, float32x4_t)
    指令格式: vacgt.f32 q0, q0, q0 

4 Comparison (absolute less-than)

    uint32x2_t vcalt_f32 (float32x2_t, float32x2_t)
    指令格式: vacgt.f32 d0, d0, d0
    uint32x4_t vcaltq_f32 (float32x4_t, float32x4_t)
    指令格式: vacgt.f32 q0, q0, q0 

5 Test bits

    uint32x2_t vtst_u32 (uint32x2_t, uint32x2_t)
    指令格式: vtst.32 d0, d0, d0
    uint16x4_t vtst_u16 (uint16x4_t, uint16x4_t)
    指令格式: vtst.16 d0, d0, d0
    uint8x8_t vtst_u8 (uint8x8_t, uint8x8_t)
    指令格式: vtst.8 d0, d0, d0
    uint32x2_t vtst_s32 (int32x2_t, int32x2_t)
    指令格式: vtst.32 d0, d0, d0
    uint16x4_t vtst_s16 (int16x4_t, int16x4_t)
    指令格式: vtst.16 d0, d0, d0
    uint8x8_t vtst_s8 (int8x8_t, int8x8_t)
    指令格式: vtst.8 d0, d0, d0
    uint8x8_t vtst_p8 (poly8x8_t, poly8x8_t)
    指令格式: vtst.8 d0, d0, d0
    uint32x4_t vtstq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vtst.32 q0, q0, q0
    uint16x8_t vtstq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vtst.16 q0, q0, q0
    uint8x16_t vtstq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vtst.8 q0, q0, q0
    uint32x4_t vtstq_s32 (int32x4_t, int32x4_t)
    指令格式: vtst.32 q0, q0, q0
    uint16x8_t vtstq_s16 (int16x8_t, int16x8_t)
    指令格式: vtst.16 q0, q0, q0
    uint8x16_t vtstq_s8 (int8x16_t, int8x16_t)
    指令格式: vtst.8 q0, q0, q0
    uint8x16_t vtstq_p8 (poly8x16_t, poly8x16_t)
    指令格式: vtst.8 q0, q0, q0 

6 Absolute difference

    uint32x2_t vabd_u32 (uint32x2_t, uint32x2_t)
    指令格式: vabd.u32 d0, d0, d0
    uint16x4_t vabd_u16 (uint16x4_t, uint16x4_t)
    指令格式: vabd.u16 d0, d0, d0
    uint8x8_t vabd_u8 (uint8x8_t, uint8x8_t)
    指令格式: vabd.u8 d0, d0, d0
    int32x2_t vabd_s32 (int32x2_t, int32x2_t)
    指令格式: vabd.s32 d0, d0, d0
    int16x4_t vabd_s16 (int16x4_t, int16x4_t)
    指令格式: vabd.s16 d0, d0, d0
    int8x8_t vabd_s8 (int8x8_t, int8x8_t)
    指令格式: vabd.s8 d0, d0, d0
    float32x2_t vabd_f32 (float32x2_t, float32x2_t)
    指令格式: vabd.f32 d0, d0, d0
    uint32x4_t vabdq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vabd.u32 q0, q0, q0
    uint16x8_t vabdq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vabd.u16 q0, q0, q0
    uint8x16_t vabdq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vabd.u8 q0, q0, q0
    int32x4_t vabdq_s32 (int32x4_t, int32x4_t)
    指令格式: vabd.s32 q0, q0, q0
    int16x8_t vabdq_s16 (int16x8_t, int16x8_t)
    指令格式: vabd.s16 q0, q0, q0
    int8x16_t vabdq_s8 (int8x16_t, int8x16_t)
    指令格式: vabd.s8 q0, q0, q0
    float32x4_t vabdq_f32 (float32x4_t, float32x4_t)
    指令格式: vabd.f32 q0, q0, q0
    uint64x2_t vabdl_u32 (uint32x2_t, uint32x2_t)
    指令格式: vabdl.u32 q0, d0, d0
    uint32x4_t vabdl_u16 (uint16x4_t, uint16x4_t)
    指令格式: vabdl.u16 q0, d0, d0
    uint16x8_t vabdl_u8 (uint8x8_t, uint8x8_t)
    指令格式: vabdl.u8 q0, d0, d0
    int64x2_t vabdl_s32 (int32x2_t, int32x2_t)
    指令格式: vabdl.s32 q0, d0, d0
    int32x4_t vabdl_s16 (int16x4_t, int16x4_t)
    指令格式: vabdl.s16 q0, d0, d0
    int16x8_t vabdl_s8 (int8x8_t, int8x8_t)
    指令格式: vabdl.s8 q0, d0, d0 

7 Absolute difference and accumulate

    uint32x2_t vaba_u32 (uint32x2_t, uint32x2_t, uint32x2_t)
    指令格式: vaba.u32 d0, d0, d0
    uint16x4_t vaba_u16 (uint16x4_t, uint16x4_t, uint16x4_t)
    指令格式: vaba.u16 d0, d0, d0
    uint8x8_t vaba_u8 (uint8x8_t, uint8x8_t, uint8x8_t)
    指令格式: vaba.u8 d0, d0, d0
    int32x2_t vaba_s32 (int32x2_t, int32x2_t, int32x2_t)
    指令格式: vaba.s32 d0, d0, d0
    int16x4_t vaba_s16 (int16x4_t, int16x4_t, int16x4_t)
    指令格式: vaba.s16 d0, d0, d0
    int8x8_t vaba_s8 (int8x8_t, int8x8_t, int8x8_t)
    指令格式: vaba.s8 d0, d0, d0
    uint32x4_t vabaq_u32 (uint32x4_t, uint32x4_t, uint32x4_t)
    指令格式: vaba.u32 q0, q0, q0
    uint16x8_t vabaq_u16 (uint16x8_t, uint16x8_t, uint16x8_t)
    指令格式: vaba.u16 q0, q0, q0
    uint8x16_t vabaq_u8 (uint8x16_t, uint8x16_t, uint8x16_t)
    指令格式: vaba.u8 q0, q0, q0
    int32x4_t vabaq_s32 (int32x4_t, int32x4_t, int32x4_t)
    指令格式: vaba.s32 q0, q0, q0
    int16x8_t vabaq_s16 (int16x8_t, int16x8_t, int16x8_t)
    指令格式: vaba.s16 q0, q0, q0
    int8x16_t vabaq_s8 (int8x16_t, int8x16_t, int8x16_t)
    指令格式: vaba.s8 q0, q0, q0
    uint64x2_t vabal_u32 (uint64x2_t, uint32x2_t, uint32x2_t)
    指令格式: vabal.u32 q0, d0, d0
    uint32x4_t vabal_u16 (uint32x4_t, uint16x4_t, uint16x4_t)
    指令格式: vabal.u16 q0, d0, d0
    uint16x8_t vabal_u8 (uint16x8_t, uint8x8_t, uint8x8_t)
    指令格式: vabal.u8 q0, d0, d0
    int64x2_t vabal_s32 (int64x2_t, int32x2_t, int32x2_t)
    指令格式: vabal.s32 q0, d0, d0
    int32x4_t vabal_s16 (int32x4_t, int16x4_t, int16x4_t)
    指令格式: vabal.s16 q0, d0, d0
    int16x8_t vabal_s8 (int16x8_t, int8x8_t, int8x8_t)
    指令格式: vabal.s8 q0, d0, d0 

8 Maximum

    uint32x2_t vmax_u32 (uint32x2_t, uint32x2_t)
    指令格式: vmax.u32 d0, d0, d0
    uint16x4_t vmax_u16 (uint16x4_t, uint16x4_t)
    指令格式: vmax.u16 d0, d0, d0
    uint8x8_t vmax_u8 (uint8x8_t, uint8x8_t)
    指令格式: vmax.u8 d0, d0, d0
    int32x2_t vmax_s32 (int32x2_t, int32x2_t)
    指令格式: vmax.s32 d0, d0, d0
    int16x4_t vmax_s16 (int16x4_t, int16x4_t)
    指令格式: vmax.s16 d0, d0, d0
    int8x8_t vmax_s8 (int8x8_t, int8x8_t)
    指令格式: vmax.s8 d0, d0, d0
    float32x2_t vmax_f32 (float32x2_t, float32x2_t)
    指令格式: vmax.f32 d0, d0, d0
    uint32x4_t vmaxq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vmax.u32 q0, q0, q0
    uint16x8_t vmaxq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vmax.u16 q0, q0, q0
    uint8x16_t vmaxq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vmax.u8 q0, q0, q0
    int32x4_t vmaxq_s32 (int32x4_t, int32x4_t)
    指令格式: vmax.s32 q0, q0, q0
    int16x8_t vmaxq_s16 (int16x8_t, int16x8_t)
    指令格式: vmax.s16 q0, q0, q0
    int8x16_t vmaxq_s8 (int8x16_t, int8x16_t)
    指令格式: vmax.s8 q0, q0, q0
    float32x4_t vmaxq_f32 (float32x4_t, float32x4_t)
    指令格式: vmax.f32 q0, q0, q0 

9 Minimum

    uint32x2_t vmin_u32 (uint32x2_t, uint32x2_t)
    指令格式: vmin.u32 d0, d0, d0
    uint16x4_t vmin_u16 (uint16x4_t, uint16x4_t)
    指令格式: vmin.u16 d0, d0, d0
    uint8x8_t vmin_u8 (uint8x8_t, uint8x8_t)
    指令格式: vmin.u8 d0, d0, d0
    int32x2_t vmin_s32 (int32x2_t, int32x2_t)
    指令格式: vmin.s32 d0, d0, d0
    int16x4_t vmin_s16 (int16x4_t, int16x4_t)
    指令格式: vmin.s16 d0, d0, d0
    int8x8_t vmin_s8 (int8x8_t, int8x8_t)
    指令格式: vmin.s8 d0, d0, d0
    float32x2_t vmin_f32 (float32x2_t, float32x2_t)
    指令格式: vmin.f32 d0, d0, d0
    uint32x4_t vminq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vmin.u32 q0, q0, q0
    uint16x8_t vminq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vmin.u16 q0, q0, q0
    uint8x16_t vminq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vmin.u8 q0, q0, q0
    int32x4_t vminq_s32 (int32x4_t, int32x4_t)
    指令格式: vmin.s32 q0, q0, q0
    int16x8_t vminq_s16 (int16x8_t, int16x8_t)
    指令格式: vmin.s16 q0, q0, q0
    int8x16_t vminq_s8 (int8x16_t, int8x16_t)
    指令格式: vmin.s8 q0, q0, q0
    float32x4_t vminq_f32 (float32x4_t, float32x4_t)
    指令格式: vmin.f32 q0, q0, q0 

.20 Pairwise add

    uint32x2_t vpadd_u32 (uint32x2_t, uint32x2_t)
    指令格式: vpadd.i32 d0, d0, d0
    uint16x4_t vpadd_u16 (uint16x4_t, uint16x4_t)
    指令格式: vpadd.i16 d0, d0, d0
    uint8x8_t vpadd_u8 (uint8x8_t, uint8x8_t)
    指令格式: vpadd.i8 d0, d0, d0
    int32x2_t vpadd_s32 (int32x2_t, int32x2_t)
    指令格式: vpadd.i32 d0, d0, d0
    int16x4_t vpadd_s16 (int16x4_t, int16x4_t)
    指令格式: vpadd.i16 d0, d0, d0
    int8x8_t vpadd_s8 (int8x8_t, int8x8_t)
    指令格式: vpadd.i8 d0, d0, d0
    float32x2_t vpadd_f32 (float32x2_t, float32x2_t)
    指令格式: vpadd.f32 d0, d0, d0
    uint64x1_t vpaddl_u32 (uint32x2_t)
    指令格式: vpaddl.u32 d0, d0
    uint32x2_t vpaddl_u16 (uint16x4_t)
    指令格式: vpaddl.u16 d0, d0
    uint16x4_t vpaddl_u8 (uint8x8_t)
    指令格式: vpaddl.u8 d0, d0
    int64x1_t vpaddl_s32 (int32x2_t)
    指令格式: vpaddl.s32 d0, d0
    int32x2_t vpaddl_s16 (int16x4_t)
    指令格式: vpaddl.s16 d0, d0
    int16x4_t vpaddl_s8 (int8x8_t)
    指令格式: vpaddl.s8 d0, d0
    uint64x2_t vpaddlq_u32 (uint32x4_t)
    指令格式: vpaddl.u32 q0, q0
    uint32x4_t vpaddlq_u16 (uint16x8_t)
    指令格式: vpaddl.u16 q0, q0
    uint16x8_t vpaddlq_u8 (uint8x16_t)
    指令格式: vpaddl.u8 q0, q0
    int64x2_t vpaddlq_s32 (int32x4_t)
    指令格式: vpaddl.s32 q0, q0
    int32x4_t vpaddlq_s16 (int16x8_t)
    指令格式: vpaddl.s16 q0, q0
    int16x8_t vpaddlq_s8 (int8x16_t)
    指令格式: vpaddl.s8 q0, q0 

.21 Pairwise add, single_opcode widen and accumulate

    uint64x1_t vpadal_u32 (uint64x1_t, uint32x2_t)
    指令格式: vpadal.u32 d0, d0
    uint32x2_t vpadal_u16 (uint32x2_t, uint16x4_t)
    指令格式: vpadal.u16 d0, d0
    uint16x4_t vpadal_u8 (uint16x4_t, uint8x8_t)
    指令格式: vpadal.u8 d0, d0
    int64x1_t vpadal_s32 (int64x1_t, int32x2_t)
    指令格式: vpadal.s32 d0, d0
    int32x2_t vpadal_s16 (int32x2_t, int16x4_t)
    指令格式: vpadal.s16 d0, d0
    int16x4_t vpadal_s8 (int16x4_t, int8x8_t)
    指令格式: vpadal.s8 d0, d0
    uint64x2_t vpadalq_u32 (uint64x2_t, uint32x4_t)
    指令格式: vpadal.u32 q0, q0
    uint32x4_t vpadalq_u16 (uint32x4_t, uint16x8_t)
    指令格式: vpadal.u16 q0, q0
    uint16x8_t vpadalq_u8 (uint16x8_t, uint8x16_t)
    指令格式: vpadal.u8 q0, q0
    int64x2_t vpadalq_s32 (int64x2_t, int32x4_t)
    指令格式: vpadal.s32 q0, q0
    int32x4_t vpadalq_s16 (int32x4_t, int16x8_t)
    指令格式: vpadal.s16 q0, q0
    int16x8_t vpadalq_s8 (int16x8_t, int8x16_t)
    指令格式: vpadal.s8 q0, q0 

.22 Folding maximum

    uint32x2_t vpmax_u32 (uint32x2_t, uint32x2_t)
    指令格式: vpmax.u32 d0, d0, d0
    uint16x4_t vpmax_u16 (uint16x4_t, uint16x4_t)
    指令格式: vpmax.u16 d0, d0, d0
    uint8x8_t vpmax_u8 (uint8x8_t, uint8x8_t)
    指令格式: vpmax.u8 d0, d0, d0
    int32x2_t vpmax_s32 (int32x2_t, int32x2_t)
    指令格式: vpmax.s32 d0, d0, d0
    int16x4_t vpmax_s16 (int16x4_t, int16x4_t)
    指令格式: vpmax.s16 d0, d0, d0
    int8x8_t vpmax_s8 (int8x8_t, int8x8_t)
    指令格式: vpmax.s8 d0, d0, d0
    float32x2_t vpmax_f32 (float32x2_t, float32x2_t)
    指令格式: vpmax.f32 d0, d0, d0 

.23 Folding minimum

    uint32x2_t vpmin_u32 (uint32x2_t, uint32x2_t)
    指令格式: vpmin.u32 d0, d0, d0
    uint16x4_t vpmin_u16 (uint16x4_t, uint16x4_t)
    指令格式: vpmin.u16 d0, d0, d0
    uint8x8_t vpmin_u8 (uint8x8_t, uint8x8_t)
    指令格式: vpmin.u8 d0, d0, d0
    int32x2_t vpmin_s32 (int32x2_t, int32x2_t)
    指令格式: vpmin.s32 d0, d0, d0
    int16x4_t vpmin_s16 (int16x4_t, int16x4_t)
    指令格式: vpmin.s16 d0, d0, d0
    int8x8_t vpmin_s8 (int8x8_t, int8x8_t)
    指令格式: vpmin.s8 d0, d0, d0
    float32x2_t vpmin_f32 (float32x2_t, float32x2_t)
    指令格式: vpmin.f32 d0, d0, d0 

.24 Reciprocal step

    float32x2_t vrecps_f32 (float32x2_t, float32x2_t)
    指令格式: vrecps.f32 d0, d0, d0
    float32x4_t vrecpsq_f32 (float32x4_t, float32x4_t)
    指令格式: vrecps.f32 q0, q0, q0
    float32x2_t vrsqrts_f32 (float32x2_t, float32x2_t)
    指令格式: vrsqrts.f32 d0, d0, d0
    float32x4_t vrsqrtsq_f32 (float32x4_t, float32x4_t)
    指令格式: vrsqrts.f32 q0, q0, q0 

.25 Vector shift left

    uint32x2_t vshl_u32 (uint32x2_t, int32x2_t)
    指令格式: vshl.u32 d0, d0, d0
    uint16x4_t vshl_u16 (uint16x4_t, int16x4_t)
    指令格式: vshl.u16 d0, d0, d0
    uint8x8_t vshl_u8 (uint8x8_t, int8x8_t)
    指令格式: vshl.u8 d0, d0, d0
    int32x2_t vshl_s32 (int32x2_t, int32x2_t)
    指令格式: vshl.s32 d0, d0, d0
    int16x4_t vshl_s16 (int16x4_t, int16x4_t)
    指令格式: vshl.s16 d0, d0, d0
    int8x8_t vshl_s8 (int8x8_t, int8x8_t)
    指令格式: vshl.s8 d0, d0, d0
    uint64x1_t vshl_u64 (uint64x1_t, int64x1_t)
    指令格式: vshl.u64 d0, d0, d0
    int64x1_t vshl_s64 (int64x1_t, int64x1_t)
    指令格式: vshl.s64 d0, d0, d0
    uint32x4_t vshlq_u32 (uint32x4_t, int32x4_t)
    指令格式: vshl.u32 q0, q0, q0
    uint16x8_t vshlq_u16 (uint16x8_t, int16x8_t)
    指令格式: vshl.u16 q0, q0, q0
    uint8x16_t vshlq_u8 (uint8x16_t, int8x16_t)
    指令格式: vshl.u8 q0, q0, q0
    int32x4_t vshlq_s32 (int32x4_t, int32x4_t)
    指令格式: vshl.s32 q0, q0, q0
    int16x8_t vshlq_s16 (int16x8_t, int16x8_t)
    指令格式: vshl.s16 q0, q0, q0
    int8x16_t vshlq_s8 (int8x16_t, int8x16_t)
    指令格式: vshl.s8 q0, q0, q0
    uint64x2_t vshlq_u64 (uint64x2_t, int64x2_t)
    指令格式: vshl.u64 q0, q0, q0
    int64x2_t vshlq_s64 (int64x2_t, int64x2_t)
    指令格式: vshl.s64 q0, q0, q0
    uint32x2_t vrshl_u32 (uint32x2_t, int32x2_t)
    指令格式: vrshl.u32 d0, d0, d0
    uint16x4_t vrshl_u16 (uint16x4_t, int16x4_t)
    指令格式: vrshl.u16 d0, d0, d0
    uint8x8_t vrshl_u8 (uint8x8_t, int8x8_t)
    指令格式: vrshl.u8 d0, d0, d0
    int32x2_t vrshl_s32 (int32x2_t, int32x2_t)
    指令格式: vrshl.s32 d0, d0, d0
    int16x4_t vrshl_s16 (int16x4_t, int16x4_t)
    指令格式: vrshl.s16 d0, d0, d0
    int8x8_t vrshl_s8 (int8x8_t, int8x8_t)
    指令格式: vrshl.s8 d0, d0, d0
    uint64x1_t vrshl_u64 (uint64x1_t, int64x1_t)
    指令格式: vrshl.u64 d0, d0, d0
    int64x1_t vrshl_s64 (int64x1_t, int64x1_t)
    指令格式: vrshl.s64 d0, d0, d0
    uint32x4_t vrshlq_u32 (uint32x4_t, int32x4_t)
    指令格式: vrshl.u32 q0, q0, q0
    uint16x8_t vrshlq_u16 (uint16x8_t, int16x8_t)
    指令格式: vrshl.u16 q0, q0, q0
    uint8x16_t vrshlq_u8 (uint8x16_t, int8x16_t)
    指令格式: vrshl.u8 q0, q0, q0
    int32x4_t vrshlq_s32 (int32x4_t, int32x4_t)
    指令格式: vrshl.s32 q0, q0, q0
    int16x8_t vrshlq_s16 (int16x8_t, int16x8_t)
    指令格式: vrshl.s16 q0, q0, q0
    int8x16_t vrshlq_s8 (int8x16_t, int8x16_t)
    指令格式: vrshl.s8 q0, q0, q0
    uint64x2_t vrshlq_u64 (uint64x2_t, int64x2_t)
    指令格式: vrshl.u64 q0, q0, q0
    int64x2_t vrshlq_s64 (int64x2_t, int64x2_t)
    指令格式: vrshl.s64 q0, q0, q0
    uint32x2_t vqshl_u32 (uint32x2_t, int32x2_t)
    指令格式: vqshl.u32 d0, d0, d0
    uint16x4_t vqshl_u16 (uint16x4_t, int16x4_t)
    指令格式: vqshl.u16 d0, d0, d0
    uint8x8_t vqshl_u8 (uint8x8_t, int8x8_t)
    指令格式: vqshl.u8 d0, d0, d0
    int32x2_t vqshl_s32 (int32x2_t, int32x2_t)
    指令格式: vqshl.s32 d0, d0, d0
    int16x4_t vqshl_s16 (int16x4_t, int16x4_t)
    指令格式: vqshl.s16 d0, d0, d0
    int8x8_t vqshl_s8 (int8x8_t, int8x8_t)
    指令格式: vqshl.s8 d0, d0, d0
    uint64x1_t vqshl_u64 (uint64x1_t, int64x1_t)
    指令格式: vqshl.u64 d0, d0, d0
    int64x1_t vqshl_s64 (int64x1_t, int64x1_t)
    指令格式: vqshl.s64 d0, d0, d0
    uint32x4_t vqshlq_u32 (uint32x4_t, int32x4_t)
    指令格式: vqshl.u32 q0, q0, q0
    uint16x8_t vqshlq_u16 (uint16x8_t, int16x8_t)
    指令格式: vqshl.u16 q0, q0, q0
    uint8x16_t vqshlq_u8 (uint8x16_t, int8x16_t)
    指令格式: vqshl.u8 q0, q0, q0
    int32x4_t vqshlq_s32 (int32x4_t, int32x4_t)
    指令格式: vqshl.s32 q0, q0, q0
    int16x8_t vqshlq_s16 (int16x8_t, int16x8_t)
    指令格式: vqshl.s16 q0, q0, q0
    int8x16_t vqshlq_s8 (int8x16_t, int8x16_t)
    指令格式: vqshl.s8 q0, q0, q0
    uint64x2_t vqshlq_u64 (uint64x2_t, int64x2_t)
    指令格式: vqshl.u64 q0, q0, q0
    int64x2_t vqshlq_s64 (int64x2_t, int64x2_t)
    指令格式: vqshl.s64 q0, q0, q0
    uint32x2_t vqrshl_u32 (uint32x2_t, int32x2_t)
    指令格式: vqrshl.u32 d0, d0, d0
    uint16x4_t vqrshl_u16 (uint16x4_t, int16x4_t)
    指令格式: vqrshl.u16 d0, d0, d0
    uint8x8_t vqrshl_u8 (uint8x8_t, int8x8_t)
    指令格式: vqrshl.u8 d0, d0, d0
    int32x2_t vqrshl_s32 (int32x2_t, int32x2_t)
    指令格式: vqrshl.s32 d0, d0, d0
    int16x4_t vqrshl_s16 (int16x4_t, int16x4_t)
    指令格式: vqrshl.s16 d0, d0, d0
    int8x8_t vqrshl_s8 (int8x8_t, int8x8_t)
    指令格式: vqrshl.s8 d0, d0, d0
    uint64x1_t vqrshl_u64 (uint64x1_t, int64x1_t)
    指令格式: vqrshl.u64 d0, d0, d0
    int64x1_t vqrshl_s64 (int64x1_t, int64x1_t)
    指令格式: vqrshl.s64 d0, d0, d0
    uint32x4_t vqrshlq_u32 (uint32x4_t, int32x4_t)
    指令格式: vqrshl.u32 q0, q0, q0
    uint16x8_t vqrshlq_u16 (uint16x8_t, int16x8_t)
    指令格式: vqrshl.u16 q0, q0, q0
    uint8x16_t vqrshlq_u8 (uint8x16_t, int8x16_t)
    指令格式: vqrshl.u8 q0, q0, q0
    int32x4_t vqrshlq_s32 (int32x4_t, int32x4_t)
    指令格式: vqrshl.s32 q0, q0, q0
    int16x8_t vqrshlq_s16 (int16x8_t, int16x8_t)
    指令格式: vqrshl.s16 q0, q0, q0
    int8x16_t vqrshlq_s8 (int8x16_t, int8x16_t)
    指令格式: vqrshl.s8 q0, q0, q0
    uint64x2_t vqrshlq_u64 (uint64x2_t, int64x2_t)
    指令格式: vqrshl.u64 q0, q0, q0
    int64x2_t vqrshlq_s64 (int64x2_t, int64x2_t)
    指令格式: vqrshl.s64 q0, q0, q0 

.26 Vector shift left by constant

    uint32x2_t vshl_n_u32 (uint32x2_t, const int)
    指令格式: vshl.i32 d0, d0, #0
    uint16x4_t vshl_n_u16 (uint16x4_t, const int)
    指令格式: vshl.i16 d0, d0, #0
    uint8x8_t vshl_n_u8 (uint8x8_t, const int)
    指令格式: vshl.i8 d0, d0, #0
    int32x2_t vshl_n_s32 (int32x2_t, const int)
    指令格式: vshl.i32 d0, d0, #0
    int16x4_t vshl_n_s16 (int16x4_t, const int)
    指令格式: vshl.i16 d0, d0, #0
    int8x8_t vshl_n_s8 (int8x8_t, const int)
    指令格式: vshl.i8 d0, d0, #0
    uint64x1_t vshl_n_u64 (uint64x1_t, const int)
    指令格式: vshl.i64 d0, d0, #0
    int64x1_t vshl_n_s64 (int64x1_t, const int)
    指令格式: vshl.i64 d0, d0, #0
    uint32x4_t vshlq_n_u32 (uint32x4_t, const int)
    指令格式: vshl.i32 q0, q0, #0
    uint16x8_t vshlq_n_u16 (uint16x8_t, const int)
    指令格式: vshl.i16 q0, q0, #0
    uint8x16_t vshlq_n_u8 (uint8x16_t, const int)
    指令格式: vshl.i8 q0, q0, #0
    int32x4_t vshlq_n_s32 (int32x4_t, const int)
    指令格式: vshl.i32 q0, q0, #0
    int16x8_t vshlq_n_s16 (int16x8_t, const int)
    指令格式: vshl.i16 q0, q0, #0
    int8x16_t vshlq_n_s8 (int8x16_t, const int)
    指令格式: vshl.i8 q0, q0, #0
    uint64x2_t vshlq_n_u64 (uint64x2_t, const int)
    指令格式: vshl.i64 q0, q0, #0
    int64x2_t vshlq_n_s64 (int64x2_t, const int)
    指令格式: vshl.i64 q0, q0, #0
    uint32x2_t vqshl_n_u32 (uint32x2_t, const int)
    指令格式: vqshl.u32 d0, d0, #0
    uint16x4_t vqshl_n_u16 (uint16x4_t, const int)
    指令格式: vqshl.u16 d0, d0, #0
    uint8x8_t vqshl_n_u8 (uint8x8_t, const int)
    指令格式: vqshl.u8 d0, d0, #0
    int32x2_t vqshl_n_s32 (int32x2_t, const int)
    指令格式: vqshl.s32 d0, d0, #0
    int16x4_t vqshl_n_s16 (int16x4_t, const int)
    指令格式: vqshl.s16 d0, d0, #0
    int8x8_t vqshl_n_s8 (int8x8_t, const int)
    指令格式: vqshl.s8 d0, d0, #0
    uint64x1_t vqshl_n_u64 (uint64x1_t, const int)
    指令格式: vqshl.u64 d0, d0, #0
    int64x1_t vqshl_n_s64 (int64x1_t, const int)
    指令格式: vqshl.s64 d0, d0, #0
    uint32x4_t vqshlq_n_u32 (uint32x4_t, const int)
    指令格式: vqshl.u32 q0, q0, #0
    uint16x8_t vqshlq_n_u16 (uint16x8_t, const int)
    指令格式: vqshl.u16 q0, q0, #0
    uint8x16_t vqshlq_n_u8 (uint8x16_t, const int)
    指令格式: vqshl.u8 q0, q0, #0
    int32x4_t vqshlq_n_s32 (int32x4_t, const int)
    指令格式: vqshl.s32 q0, q0, #0
    int16x8_t vqshlq_n_s16 (int16x8_t, const int)
    指令格式: vqshl.s16 q0, q0, #0
    int8x16_t vqshlq_n_s8 (int8x16_t, const int)
    指令格式: vqshl.s8 q0, q0, #0
    uint64x2_t vqshlq_n_u64 (uint64x2_t, const int)
    指令格式: vqshl.u64 q0, q0, #0
    int64x2_t vqshlq_n_s64 (int64x2_t, const int)
    指令格式: vqshl.s64 q0, q0, #0
    uint64x1_t vqshlu_n_s64 (int64x1_t, const int)
    指令格式: vqshlu.s64 d0, d0, #0
    uint32x2_t vqshlu_n_s32 (int32x2_t, const int)
    指令格式: vqshlu.s32 d0, d0, #0
    uint16x4_t vqshlu_n_s16 (int16x4_t, const int)
    指令格式: vqshlu.s16 d0, d0, #0
    uint8x8_t vqshlu_n_s8 (int8x8_t, const int)
    指令格式: vqshlu.s8 d0, d0, #0
    uint64x2_t vqshluq_n_s64 (int64x2_t, const int)
    指令格式: vqshlu.s64 q0, q0, #0
    uint32x4_t vqshluq_n_s32 (int32x4_t, const int)
    指令格式: vqshlu.s32 q0, q0, #0
    uint16x8_t vqshluq_n_s16 (int16x8_t, const int)
    指令格式: vqshlu.s16 q0, q0, #0
    uint8x16_t vqshluq_n_s8 (int8x16_t, const int)
    指令格式: vqshlu.s8 q0, q0, #0
    uint64x2_t vshll_n_u32 (uint32x2_t, const int)
    指令格式: vshll.u32 q0, d0, #0
    uint32x4_t vshll_n_u16 (uint16x4_t, const int)
    指令格式: vshll.u16 q0, d0, #0
    uint16x8_t vshll_n_u8 (uint8x8_t, const int)
    指令格式: vshll.u8 q0, d0, #0
    int64x2_t vshll_n_s32 (int32x2_t, const int)
    指令格式: vshll.s32 q0, d0, #0
    int32x4_t vshll_n_s16 (int16x4_t, const int)
    指令格式: vshll.s16 q0, d0, #0
    int16x8_t vshll_n_s8 (int8x8_t, const int)
    指令格式: vshll.s8 q0, d0, #0 

.27 Vector shift right by constant

    uint32x2_t vshr_n_u32 (uint32x2_t, const int)
    指令格式: vshr.u32 d0, d0, #0
    uint16x4_t vshr_n_u16 (uint16x4_t, const int)
    指令格式: vshr.u16 d0, d0, #0
    uint8x8_t vshr_n_u8 (uint8x8_t, const int)
    指令格式: vshr.u8 d0, d0, #0
    int32x2_t vshr_n_s32 (int32x2_t, const int)
    指令格式: vshr.s32 d0, d0, #0
    int16x4_t vshr_n_s16 (int16x4_t, const int)
    指令格式: vshr.s16 d0, d0, #0
    int8x8_t vshr_n_s8 (int8x8_t, const int)
    指令格式: vshr.s8 d0, d0, #0
    uint64x1_t vshr_n_u64 (uint64x1_t, const int)
    指令格式: vshr.u64 d0, d0, #0
    int64x1_t vshr_n_s64 (int64x1_t, const int)
    指令格式: vshr.s64 d0, d0, #0
    uint32x4_t vshrq_n_u32 (uint32x4_t, const int)
    指令格式: vshr.u32 q0, q0, #0
    uint16x8_t vshrq_n_u16 (uint16x8_t, const int)
    指令格式: vshr.u16 q0, q0, #0
    uint8x16_t vshrq_n_u8 (uint8x16_t, const int)
    指令格式: vshr.u8 q0, q0, #0
    int32x4_t vshrq_n_s32 (int32x4_t, const int)
    指令格式: vshr.s32 q0, q0, #0
    int16x8_t vshrq_n_s16 (int16x8_t, const int)
    指令格式: vshr.s16 q0, q0, #0
    int8x16_t vshrq_n_s8 (int8x16_t, const int)
    指令格式: vshr.s8 q0, q0, #0
    uint64x2_t vshrq_n_u64 (uint64x2_t, const int)
    指令格式: vshr.u64 q0, q0, #0
    int64x2_t vshrq_n_s64 (int64x2_t, const int)
    指令格式: vshr.s64 q0, q0, #0
    uint32x2_t vrshr_n_u32 (uint32x2_t, const int)
    指令格式: vrshr.u32 d0, d0, #0
    uint16x4_t vrshr_n_u16 (uint16x4_t, const int)
    指令格式: vrshr.u16 d0, d0, #0
    uint8x8_t vrshr_n_u8 (uint8x8_t, const int)
    指令格式: vrshr.u8 d0, d0, #0
    int32x2_t vrshr_n_s32 (int32x2_t, const int)
    指令格式: vrshr.s32 d0, d0, #0
    int16x4_t vrshr_n_s16 (int16x4_t, const int)
    指令格式: vrshr.s16 d0, d0, #0
    int8x8_t vrshr_n_s8 (int8x8_t, const int)
    指令格式: vrshr.s8 d0, d0, #0
    uint64x1_t vrshr_n_u64 (uint64x1_t, const int)
    指令格式: vrshr.u64 d0, d0, #0
    int64x1_t vrshr_n_s64 (int64x1_t, const int)
    指令格式: vrshr.s64 d0, d0, #0
    uint32x4_t vrshrq_n_u32 (uint32x4_t, const int)
    指令格式: vrshr.u32 q0, q0, #0
    uint16x8_t vrshrq_n_u16 (uint16x8_t, const int)
    指令格式: vrshr.u16 q0, q0, #0
    uint8x16_t vrshrq_n_u8 (uint8x16_t, const int)
    指令格式: vrshr.u8 q0, q0, #0
    int32x4_t vrshrq_n_s32 (int32x4_t, const int)
    指令格式: vrshr.s32 q0, q0, #0
    int16x8_t vrshrq_n_s16 (int16x8_t, const int)
    指令格式: vrshr.s16 q0, q0, #0
    int8x16_t vrshrq_n_s8 (int8x16_t, const int)
    指令格式: vrshr.s8 q0, q0, #0
    uint64x2_t vrshrq_n_u64 (uint64x2_t, const int)
    指令格式: vrshr.u64 q0, q0, #0
    int64x2_t vrshrq_n_s64 (int64x2_t, const int)
    指令格式: vrshr.s64 q0, q0, #0
    uint32x2_t vshrn_n_u64 (uint64x2_t, const int)
    指令格式: vshrn.i64 d0, q0, #0
    uint16x4_t vshrn_n_u32 (uint32x4_t, const int)
    指令格式: vshrn.i32 d0, q0, #0
    uint8x8_t vshrn_n_u16 (uint16x8_t, const int)
    指令格式: vshrn.i16 d0, q0, #0
    int32x2_t vshrn_n_s64 (int64x2_t, const int)
    指令格式: vshrn.i64 d0, q0, #0
    int16x4_t vshrn_n_s32 (int32x4_t, const int)
    指令格式: vshrn.i32 d0, q0, #0
    int8x8_t vshrn_n_s16 (int16x8_t, const int)
    指令格式: vshrn.i16 d0, q0, #0
    uint32x2_t vrshrn_n_u64 (uint64x2_t, const int)
    指令格式: vrshrn.i64 d0, q0, #0
    uint16x4_t vrshrn_n_u32 (uint32x4_t, const int)
    指令格式: vrshrn.i32 d0, q0, #0
    uint8x8_t vrshrn_n_u16 (uint16x8_t, const int)
    指令格式: vrshrn.i16 d0, q0, #0
    int32x2_t vrshrn_n_s64 (int64x2_t, const int)
    指令格式: vrshrn.i64 d0, q0, #0
    int16x4_t vrshrn_n_s32 (int32x4_t, const int)
    指令格式: vrshrn.i32 d0, q0, #0
    int8x8_t vrshrn_n_s16 (int16x8_t, const int)
    指令格式: vrshrn.i16 d0, q0, #0
    uint32x2_t vqshrn_n_u64 (uint64x2_t, const int)
    指令格式: vqshrn.u64 d0, q0, #0
    uint16x4_t vqshrn_n_u32 (uint32x4_t, const int)
    指令格式: vqshrn.u32 d0, q0, #0
    uint8x8_t vqshrn_n_u16 (uint16x8_t, const int)
    指令格式: vqshrn.u16 d0, q0, #0
    int32x2_t vqshrn_n_s64 (int64x2_t, const int)
    指令格式: vqshrn.s64 d0, q0, #0
    int16x4_t vqshrn_n_s32 (int32x4_t, const int)
    指令格式: vqshrn.s32 d0, q0, #0
    int8x8_t vqshrn_n_s16 (int16x8_t, const int)
    指令格式: vqshrn.s16 d0, q0, #0
    uint32x2_t vqrshrn_n_u64 (uint64x2_t, const int)
    指令格式: vqrshrn.u64 d0, q0, #0
    uint16x4_t vqrshrn_n_u32 (uint32x4_t, const int)
    指令格式: vqrshrn.u32 d0, q0, #0
    uint8x8_t vqrshrn_n_u16 (uint16x8_t, const int)
    指令格式: vqrshrn.u16 d0, q0, #0
    int32x2_t vqrshrn_n_s64 (int64x2_t, const int)
    指令格式: vqrshrn.s64 d0, q0, #0
    int16x4_t vqrshrn_n_s32 (int32x4_t, const int)
    指令格式: vqrshrn.s32 d0, q0, #0
    int8x8_t vqrshrn_n_s16 (int16x8_t, const int)
    指令格式: vqrshrn.s16 d0, q0, #0
    uint32x2_t vqshrun_n_s64 (int64x2_t, const int)
    指令格式: vqshrun.s64 d0, q0, #0
    uint16x4_t vqshrun_n_s32 (int32x4_t, const int)
    指令格式: vqshrun.s32 d0, q0, #0
    uint8x8_t vqshrun_n_s16 (int16x8_t, const int)
    指令格式: vqshrun.s16 d0, q0, #0
    uint32x2_t vqrshrun_n_s64 (int64x2_t, const int)
    指令格式: vqrshrun.s64 d0, q0, #0
    uint16x4_t vqrshrun_n_s32 (int32x4_t, const int)
    指令格式: vqrshrun.s32 d0, q0, #0
    uint8x8_t vqrshrun_n_s16 (int16x8_t, const int)
    指令格式: vqrshrun.s16 d0, q0, #0 

.28 Vector shift right by constant and accumulate

    uint32x2_t vsra_n_u32 (uint32x2_t, uint32x2_t, const int)
    指令格式: vsra.u32 d0, d0, #0
    uint16x4_t vsra_n_u16 (uint16x4_t, uint16x4_t, const int)
    指令格式: vsra.u16 d0, d0, #0
    uint8x8_t vsra_n_u8 (uint8x8_t, uint8x8_t, const int)
    指令格式: vsra.u8 d0, d0, #0
    int32x2_t vsra_n_s32 (int32x2_t, int32x2_t, const int)
    指令格式: vsra.s32 d0, d0, #0
    int16x4_t vsra_n_s16 (int16x4_t, int16x4_t, const int)
    指令格式: vsra.s16 d0, d0, #0
    int8x8_t vsra_n_s8 (int8x8_t, int8x8_t, const int)
    指令格式: vsra.s8 d0, d0, #0
    uint64x1_t vsra_n_u64 (uint64x1_t, uint64x1_t, const int)
    指令格式: vsra.u64 d0, d0, #0
    int64x1_t vsra_n_s64 (int64x1_t, int64x1_t, const int)
    指令格式: vsra.s64 d0, d0, #0
    uint32x4_t vsraq_n_u32 (uint32x4_t, uint32x4_t, const int)
    指令格式: vsra.u32 q0, q0, #0
    uint16x8_t vsraq_n_u16 (uint16x8_t, uint16x8_t, const int)
    指令格式: vsra.u16 q0, q0, #0
    uint8x16_t vsraq_n_u8 (uint8x16_t, uint8x16_t, const int)
    指令格式: vsra.u8 q0, q0, #0
    int32x4_t vsraq_n_s32 (int32x4_t, int32x4_t, const int)
    指令格式: vsra.s32 q0, q0, #0
    int16x8_t vsraq_n_s16 (int16x8_t, int16x8_t, const int)
    指令格式: vsra.s16 q0, q0, #0
    int8x16_t vsraq_n_s8 (int8x16_t, int8x16_t, const int)
    指令格式: vsra.s8 q0, q0, #0
    uint64x2_t vsraq_n_u64 (uint64x2_t, uint64x2_t, const int)
    指令格式: vsra.u64 q0, q0, #0
    int64x2_t vsraq_n_s64 (int64x2_t, int64x2_t, const int)
    指令格式: vsra.s64 q0, q0, #0
    uint32x2_t vrsra_n_u32 (uint32x2_t, uint32x2_t, const int)
    指令格式: vrsra.u32 d0, d0, #0
    uint16x4_t vrsra_n_u16 (uint16x4_t, uint16x4_t, const int)
    指令格式: vrsra.u16 d0, d0, #0
    uint8x8_t vrsra_n_u8 (uint8x8_t, uint8x8_t, const int)
    指令格式: vrsra.u8 d0, d0, #0
    int32x2_t vrsra_n_s32 (int32x2_t, int32x2_t, const int)
    指令格式: vrsra.s32 d0, d0, #0
    int16x4_t vrsra_n_s16 (int16x4_t, int16x4_t, const int)
    指令格式: vrsra.s16 d0, d0, #0
    int8x8_t vrsra_n_s8 (int8x8_t, int8x8_t, const int)
    指令格式: vrsra.s8 d0, d0, #0
    uint64x1_t vrsra_n_u64 (uint64x1_t, uint64x1_t, const int)
    指令格式: vrsra.u64 d0, d0, #0
    int64x1_t vrsra_n_s64 (int64x1_t, int64x1_t, const int)
    指令格式: vrsra.s64 d0, d0, #0
    uint32x4_t vrsraq_n_u32 (uint32x4_t, uint32x4_t, const int)
    指令格式: vrsra.u32 q0, q0, #0
    uint16x8_t vrsraq_n_u16 (uint16x8_t, uint16x8_t, const int)
    指令格式: vrsra.u16 q0, q0, #0
    uint8x16_t vrsraq_n_u8 (uint8x16_t, uint8x16_t, const int)
    指令格式: vrsra.u8 q0, q0, #0
    int32x4_t vrsraq_n_s32 (int32x4_t, int32x4_t, const int)
    指令格式: vrsra.s32 q0, q0, #0
    int16x8_t vrsraq_n_s16 (int16x8_t, int16x8_t, const int)
    指令格式: vrsra.s16 q0, q0, #0
    int8x16_t vrsraq_n_s8 (int8x16_t, int8x16_t, const int)
    指令格式: vrsra.s8 q0, q0, #0
    uint64x2_t vrsraq_n_u64 (uint64x2_t, uint64x2_t, const int)
    指令格式: vrsra.u64 q0, q0, #0
    int64x2_t vrsraq_n_s64 (int64x2_t, int64x2_t, const int)
    指令格式: vrsra.s64 q0, q0, #0 

.29 Vector shift right and insert

    uint32x2_t vsri_n_u32 (uint32x2_t, uint32x2_t, const int)
    指令格式: vsri.32 d0, d0, #0
    uint16x4_t vsri_n_u16 (uint16x4_t, uint16x4_t, const int)
    指令格式: vsri.16 d0, d0, #0
    uint8x8_t vsri_n_u8 (uint8x8_t, uint8x8_t, const int)
    指令格式: vsri.8 d0, d0, #0
    int32x2_t vsri_n_s32 (int32x2_t, int32x2_t, const int)
    指令格式: vsri.32 d0, d0, #0
    int16x4_t vsri_n_s16 (int16x4_t, int16x4_t, const int)
    指令格式: vsri.16 d0, d0, #0
    int8x8_t vsri_n_s8 (int8x8_t, int8x8_t, const int)
    指令格式: vsri.8 d0, d0, #0
    uint64x1_t vsri_n_u64 (uint64x1_t, uint64x1_t, const int)
    指令格式: vsri.64 d0, d0, #0
    int64x1_t vsri_n_s64 (int64x1_t, int64x1_t, const int)
    指令格式: vsri.64 d0, d0, #0
    poly16x4_t vsri_n_p16 (poly16x4_t, poly16x4_t, const int)
    指令格式: vsri.16 d0, d0, #0
    poly8x8_t vsri_n_p8 (poly8x8_t, poly8x8_t, const int)
    指令格式: vsri.8 d0, d0, #0
    uint32x4_t vsriq_n_u32 (uint32x4_t, uint32x4_t, const int)
    指令格式: vsri.32 q0, q0, #0
    uint16x8_t vsriq_n_u16 (uint16x8_t, uint16x8_t, const int)
    指令格式: vsri.16 q0, q0, #0
    uint8x16_t vsriq_n_u8 (uint8x16_t, uint8x16_t, const int)
    指令格式: vsri.8 q0, q0, #0
    int32x4_t vsriq_n_s32 (int32x4_t, int32x4_t, const int)
    指令格式: vsri.32 q0, q0, #0
    int16x8_t vsriq_n_s16 (int16x8_t, int16x8_t, const int)
    指令格式: vsri.16 q0, q0, #0
    int8x16_t vsriq_n_s8 (int8x16_t, int8x16_t, const int)
    指令格式: vsri.8 q0, q0, #0
    uint64x2_t vsriq_n_u64 (uint64x2_t, uint64x2_t, const int)
    指令格式: vsri.64 q0, q0, #0
    int64x2_t vsriq_n_s64 (int64x2_t, int64x2_t, const int)
    指令格式: vsri.64 q0, q0, #0
    poly16x8_t vsriq_n_p16 (poly16x8_t, poly16x8_t, const int)
    指令格式: vsri.16 q0, q0, #0
    poly8x16_t vsriq_n_p8 (poly8x16_t, poly8x16_t, const int)
    指令格式: vsri.8 q0, q0, #0 

.30 Vector shift left and insert

    uint32x2_t vsli_n_u32 (uint32x2_t, uint32x2_t, const int)
    指令格式: vsli.32 d0, d0, #0
    uint16x4_t vsli_n_u16 (uint16x4_t, uint16x4_t, const int)
    指令格式: vsli.16 d0, d0, #0
    uint8x8_t vsli_n_u8 (uint8x8_t, uint8x8_t, const int)
    指令格式: vsli.8 d0, d0, #0
    int32x2_t vsli_n_s32 (int32x2_t, int32x2_t, const int)
    指令格式: vsli.32 d0, d0, #0
    int16x4_t vsli_n_s16 (int16x4_t, int16x4_t, const int)
    指令格式: vsli.16 d0, d0, #0
    int8x8_t vsli_n_s8 (int8x8_t, int8x8_t, const int)
    指令格式: vsli.8 d0, d0, #0
    uint64x1_t vsli_n_u64 (uint64x1_t, uint64x1_t, const int)
    指令格式: vsli.64 d0, d0, #0
    int64x1_t vsli_n_s64 (int64x1_t, int64x1_t, const int)
    指令格式: vsli.64 d0, d0, #0
    poly16x4_t vsli_n_p16 (poly16x4_t, poly16x4_t, const int)
    指令格式: vsli.16 d0, d0, #0
    poly8x8_t vsli_n_p8 (poly8x8_t, poly8x8_t, const int)
    指令格式: vsli.8 d0, d0, #0
    uint32x4_t vsliq_n_u32 (uint32x4_t, uint32x4_t, const int)
    指令格式: vsli.32 q0, q0, #0
    uint16x8_t vsliq_n_u16 (uint16x8_t, uint16x8_t, const int)
    指令格式: vsli.16 q0, q0, #0
    uint8x16_t vsliq_n_u8 (uint8x16_t, uint8x16_t, const int)
    指令格式: vsli.8 q0, q0, #0
    int32x4_t vsliq_n_s32 (int32x4_t, int32x4_t, const int)
    指令格式: vsli.32 q0, q0, #0
    int16x8_t vsliq_n_s16 (int16x8_t, int16x8_t, const int)
    指令格式: vsli.16 q0, q0, #0
    int8x16_t vsliq_n_s8 (int8x16_t, int8x16_t, const int)
    指令格式: vsli.8 q0, q0, #0
    uint64x2_t vsliq_n_u64 (uint64x2_t, uint64x2_t, const int)
    指令格式: vsli.64 q0, q0, #0
    int64x2_t vsliq_n_s64 (int64x2_t, int64x2_t, const int)
    指令格式: vsli.64 q0, q0, #0
    poly16x8_t vsliq_n_p16 (poly16x8_t, poly16x8_t, const int)
    指令格式: vsli.16 q0, q0, #0
    poly8x16_t vsliq_n_p8 (poly8x16_t, poly8x16_t, const int)
    指令格式: vsli.8 q0, q0, #0 

.31 Absolute value

    float32x2_t vabs_f32 (float32x2_t)
    指令格式: vabs.f32 d0, d0
    int32x2_t vabs_s32 (int32x2_t)
    指令格式: vabs.s32 d0, d0
    int16x4_t vabs_s16 (int16x4_t)
    指令格式: vabs.s16 d0, d0
    int8x8_t vabs_s8 (int8x8_t)
    指令格式: vabs.s8 d0, d0
    float32x4_t vabsq_f32 (float32x4_t)
    指令格式: vabs.f32 q0, q0
    int32x4_t vabsq_s32 (int32x4_t)
    指令格式: vabs.s32 q0, q0
    int16x8_t vabsq_s16 (int16x8_t)
    指令格式: vabs.s16 q0, q0
    int8x16_t vabsq_s8 (int8x16_t)
    指令格式: vabs.s8 q0, q0
    int32x2_t vqabs_s32 (int32x2_t)
    指令格式: vqabs.s32 d0, d0
    int16x4_t vqabs_s16 (int16x4_t)
    指令格式: vqabs.s16 d0, d0
    int8x8_t vqabs_s8 (int8x8_t)
    指令格式: vqabs.s8 d0, d0
    int32x4_t vqabsq_s32 (int32x4_t)
    指令格式: vqabs.s32 q0, q0
    int16x8_t vqabsq_s16 (int16x8_t)
    指令格式: vqabs.s16 q0, q0
    int8x16_t vqabsq_s8 (int8x16_t)
    指令格式: vqabs.s8 q0, q0 

.32 Negation

    float32x2_t vneg_f32 (float32x2_t)
    指令格式: vneg.f32 d0, d0
    int32x2_t vneg_s32 (int32x2_t)
    指令格式: vneg.s32 d0, d0
    int16x4_t vneg_s16 (int16x4_t)
    指令格式: vneg.s16 d0, d0
    int8x8_t vneg_s8 (int8x8_t)
    指令格式: vneg.s8 d0, d0
    float32x4_t vnegq_f32 (float32x4_t)
    指令格式: vneg.f32 q0, q0
    int32x4_t vnegq_s32 (int32x4_t)
    指令格式: vneg.s32 q0, q0
    int16x8_t vnegq_s16 (int16x8_t)
    指令格式: vneg.s16 q0, q0
    int8x16_t vnegq_s8 (int8x16_t)
    指令格式: vneg.s8 q0, q0
    int32x2_t vqneg_s32 (int32x2_t)
    指令格式: vqneg.s32 d0, d0
    int16x4_t vqneg_s16 (int16x4_t)
    指令格式: vqneg.s16 d0, d0
    int8x8_t vqneg_s8 (int8x8_t)
    指令格式: vqneg.s8 d0, d0
    int32x4_t vqnegq_s32 (int32x4_t)
    指令格式: vqneg.s32 q0, q0
    int16x8_t vqnegq_s16 (int16x8_t)
    指令格式: vqneg.s16 q0, q0
    int8x16_t vqnegq_s8 (int8x16_t)
    指令格式: vqneg.s8 q0, q0 

.33 Bitwise not

    uint32x2_t vmvn_u32 (uint32x2_t)
    指令格式: vmvn d0, d0
    uint16x4_t vmvn_u16 (uint16x4_t)
    指令格式: vmvn d0, d0
    uint8x8_t vmvn_u8 (uint8x8_t)
    指令格式: vmvn d0, d0
    int32x2_t vmvn_s32 (int32x2_t)
    指令格式: vmvn d0, d0
    int16x4_t vmvn_s16 (int16x4_t)
    指令格式: vmvn d0, d0
    int8x8_t vmvn_s8 (int8x8_t)
    指令格式: vmvn d0, d0
    poly8x8_t vmvn_p8 (poly8x8_t)
    指令格式: vmvn d0, d0
    uint32x4_t vmvnq_u32 (uint32x4_t)
    指令格式: vmvn q0, q0
    uint16x8_t vmvnq_u16 (uint16x8_t)
    指令格式: vmvn q0, q0
    uint8x16_t vmvnq_u8 (uint8x16_t)
    指令格式: vmvn q0, q0
    int32x4_t vmvnq_s32 (int32x4_t)
    指令格式: vmvn q0, q0
    int16x8_t vmvnq_s16 (int16x8_t)
    指令格式: vmvn q0, q0
    int8x16_t vmvnq_s8 (int8x16_t)
    指令格式: vmvn q0, q0
    poly8x16_t vmvnq_p8 (poly8x16_t)
    指令格式: vmvn q0, q0 

.34 Count leading sign bits

    int32x2_t vcls_s32 (int32x2_t)
    指令格式: vcls.s32 d0, d0
    int16x4_t vcls_s16 (int16x4_t)
    指令格式: vcls.s16 d0, d0
    int8x8_t vcls_s8 (int8x8_t)
    指令格式: vcls.s8 d0, d0
    int32x4_t vclsq_s32 (int32x4_t)
    指令格式: vcls.s32 q0, q0
    int16x8_t vclsq_s16 (int16x8_t)
    指令格式: vcls.s16 q0, q0
    int8x16_t vclsq_s8 (int8x16_t)
    指令格式: vcls.s8 q0, q0 

.35 Count leading zeros

    uint32x2_t vclz_u32 (uint32x2_t)
    指令格式: vclz.i32 d0, d0
    uint16x4_t vclz_u16 (uint16x4_t)
    指令格式: vclz.i16 d0, d0
    uint8x8_t vclz_u8 (uint8x8_t)
    指令格式: vclz.i8 d0, d0
    int32x2_t vclz_s32 (int32x2_t)
    指令格式: vclz.i32 d0, d0
    int16x4_t vclz_s16 (int16x4_t)
    指令格式: vclz.i16 d0, d0
    int8x8_t vclz_s8 (int8x8_t)
    指令格式: vclz.i8 d0, d0
    uint32x4_t vclzq_u32 (uint32x4_t)
    指令格式: vclz.i32 q0, q0
    uint16x8_t vclzq_u16 (uint16x8_t)
    指令格式: vclz.i16 q0, q0
    uint8x16_t vclzq_u8 (uint8x16_t)
    指令格式: vclz.i8 q0, q0
    int32x4_t vclzq_s32 (int32x4_t)
    指令格式: vclz.i32 q0, q0
    int16x8_t vclzq_s16 (int16x8_t)
    指令格式: vclz.i16 q0, q0
    int8x16_t vclzq_s8 (int8x16_t)
    指令格式: vclz.i8 q0, q0 

.36 Count number of set bits

    uint8x8_t vcnt_u8 (uint8x8_t)
    指令格式: vcnt.8 d0, d0
    int8x8_t vcnt_s8 (int8x8_t)
    指令格式: vcnt.8 d0, d0
    poly8x8_t vcnt_p8 (poly8x8_t)
    指令格式: vcnt.8 d0, d0
    uint8x16_t vcntq_u8 (uint8x16_t)
    指令格式: vcnt.8 q0, q0
    int8x16_t vcntq_s8 (int8x16_t)
    指令格式: vcnt.8 q0, q0
    poly8x16_t vcntq_p8 (poly8x16_t)
    指令格式: vcnt.8 q0, q0 

.37 Reciprocal estimate

    float32x2_t vrecpe_f32 (float32x2_t)
    指令格式: vrecpe.f32 d0, d0
    uint32x2_t vrecpe_u32 (uint32x2_t)
    指令格式: vrecpe.u32 d0, d0
    float32x4_t vrecpeq_f32 (float32x4_t)
    指令格式: vrecpe.f32 q0, q0
    uint32x4_t vrecpeq_u32 (uint32x4_t)
    指令格式: vrecpe.u32 q0, q0 

.38 Reciprocal square-root estimate

    float32x2_t vrsqrte_f32 (float32x2_t)
    指令格式: vrsqrte.f32 d0, d0
    uint32x2_t vrsqrte_u32 (uint32x2_t)
    指令格式: vrsqrte.u32 d0, d0
    float32x4_t vrsqrteq_f32 (float32x4_t)
    指令格式: vrsqrte.f32 q0, q0
    uint32x4_t vrsqrteq_u32 (uint32x4_t)
    指令格式: vrsqrte.u32 q0, q0 

.39 Get lanes from a vector

    uint32_t vget_lane_u32 (uint32x2_t, const int)
    指令格式: vmov.32 r0, d0[0]
    uint16_t vget_lane_u16 (uint16x4_t, const int)
    指令格式: vmov.u16 r0, d0[0]
    uint8_t vget_lane_u8 (uint8x8_t, const int)
    指令格式: vmov.u8 r0, d0[0]
    int32_t vget_lane_s32 (int32x2_t, const int)
    指令格式: vmov.32 r0, d0[0]
    int16_t vget_lane_s16 (int16x4_t, const int)
    指令格式: vmov.s16 r0, d0[0]
    int8_t vget_lane_s8 (int8x8_t, const int)
    指令格式: vmov.s8 r0, d0[0]
    float32_t vget_lane_f32 (float32x2_t, const int)
    指令格式: vmov.32 r0, d0[0]
    poly16_t vget_lane_p16 (poly16x4_t, const int)
    指令格式: vmov.u16 r0, d0[0]
    poly8_t vget_lane_p8 (poly8x8_t, const int)
    指令格式: vmov.u8 r0, d0[0]
    uint64_t vget_lane_u64 (uint64x1_t, const int)
    int64_t vget_lane_s64 (int64x1_t, const int)
    uint32_t vgetq_lane_u32 (uint32x4_t, const int)
    指令格式: vmov.32 r0, d0[0]
    uint16_t vgetq_lane_u16 (uint16x8_t, const int)
    指令格式: vmov.u16 r0, d0[0]
    uint8_t vgetq_lane_u8 (uint8x16_t, const int)
    指令格式: vmov.u8 r0, d0[0]
    int32_t vgetq_lane_s32 (int32x4_t, const int)
    指令格式: vmov.32 r0, d0[0]
    int16_t vgetq_lane_s16 (int16x8_t, const int)
    指令格式: vmov.s16 r0, d0[0]
    int8_t vgetq_lane_s8 (int8x16_t, const int)
    指令格式: vmov.s8 r0, d0[0]
    float32_t vgetq_lane_f32 (float32x4_t, const int)
    指令格式: vmov.32 r0, d0[0]
    poly16_t vgetq_lane_p16 (poly16x8_t, const int)
    指令格式: vmov.u16 r0, d0[0]
    poly8_t vgetq_lane_p8 (poly8x16_t, const int)
    指令格式: vmov.u8 r0, d0[0]
    uint64_t vgetq_lane_u64 (uint64x2_t, const int)
    指令格式: vmov r0, r0, d0
    int64_t vgetq_lane_s64 (int64x2_t, const int)
    指令格式: vmov r0, r0, d0 

.40 Set lanes in a vector

    uint32x2_t vset_lane_u32 (uint32_t, uint32x2_t, const int)
    指令格式: vmov.32 d0[0], r0
    uint16x4_t vset_lane_u16 (uint16_t, uint16x4_t, const int)
    指令格式: vmov.16 d0[0], r0
    uint8x8_t vset_lane_u8 (uint8_t, uint8x8_t, const int)
    指令格式: vmov.8 d0[0], r0
    int32x2_t vset_lane_s32 (int32_t, int32x2_t, const int)
    指令格式: vmov.32 d0[0], r0
    int16x4_t vset_lane_s16 (int16_t, int16x4_t, const int)
    指令格式: vmov.16 d0[0], r0
    int8x8_t vset_lane_s8 (int8_t, int8x8_t, const int)
    指令格式: vmov.8 d0[0], r0
    float32x2_t vset_lane_f32 (float32_t, float32x2_t, const int)
    指令格式: vmov.32 d0[0], r0
    poly16x4_t vset_lane_p16 (poly16_t, poly16x4_t, const int)
    指令格式: vmov.16 d0[0], r0
    poly8x8_t vset_lane_p8 (poly8_t, poly8x8_t, const int)
    指令格式: vmov.8 d0[0], r0
    uint64x1_t vset_lane_u64 (uint64_t, uint64x1_t, const int)
    int64x1_t vset_lane_s64 (int64_t, int64x1_t, const int)
    uint32x4_t vsetq_lane_u32 (uint32_t, uint32x4_t, const int)
    指令格式: vmov.32 d0[0], r0
    uint16x8_t vsetq_lane_u16 (uint16_t, uint16x8_t, const int)
    指令格式: vmov.16 d0[0], r0
    uint8x16_t vsetq_lane_u8 (uint8_t, uint8x16_t, const int)
    指令格式: vmov.8 d0[0], r0
    int32x4_t vsetq_lane_s32 (int32_t, int32x4_t, const int)
    指令格式: vmov.32 d0[0], r0
    int16x8_t vsetq_lane_s16 (int16_t, int16x8_t, const int)
    指令格式: vmov.16 d0[0], r0
    int8x16_t vsetq_lane_s8 (int8_t, int8x16_t, const int)
    指令格式: vmov.8 d0[0], r0
    float32x4_t vsetq_lane_f32 (float32_t, float32x4_t, const int)
    指令格式: vmov.32 d0[0], r0
    poly16x8_t vsetq_lane_p16 (poly16_t, poly16x8_t, const int)
    指令格式: vmov.16 d0[0], r0
    poly8x16_t vsetq_lane_p8 (poly8_t, poly8x16_t, const int)
    指令格式: vmov.8 d0[0], r0
    uint64x2_t vsetq_lane_u64 (uint64_t, uint64x2_t, const int)
    指令格式: vmov d0, r0, r0
    int64x2_t vsetq_lane_s64 (int64_t, int64x2_t, const int)
    指令格式: vmov d0, r0, r0 

.41 Create vector from literal bit pattern

    uint32x2_t vcreate_u32 (uint64_t)
    uint16x4_t vcreate_u16 (uint64_t)
    uint8x8_t vcreate_u8 (uint64_t)
    int32x2_t vcreate_s32 (uint64_t)
    int16x4_t vcreate_s16 (uint64_t)
    int8x8_t vcreate_s8 (uint64_t)
    uint64x1_t vcreate_u64 (uint64_t)
    int64x1_t vcreate_s64 (uint64_t)
    float32x2_t vcreate_f32 (uint64_t)
    poly16x4_t vcreate_p16 (uint64_t)
    poly8x8_t vcreate_p8 (uint64_t) 

.42 Set all lanes to the same value

    uint32x2_t vdup_n_u32 (uint32_t)
    指令格式: vdup.32 d0, r0
    uint16x4_t vdup_n_u16 (uint16_t)
    指令格式: vdup.16 d0, r0
    uint8x8_t vdup_n_u8 (uint8_t)
    指令格式: vdup.8 d0, r0
    int32x2_t vdup_n_s32 (int32_t)
    指令格式: vdup.32 d0, r0
    int16x4_t vdup_n_s16 (int16_t)
    指令格式: vdup.16 d0, r0
    int8x8_t vdup_n_s8 (int8_t)
    指令格式: vdup.8 d0, r0
    float32x2_t vdup_n_f32 (float32_t)
    指令格式: vdup.32 d0, r0
    poly16x4_t vdup_n_p16 (poly16_t)
    指令格式: vdup.16 d0, r0
    poly8x8_t vdup_n_p8 (poly8_t)
    指令格式: vdup.8 d0, r0
    uint64x1_t vdup_n_u64 (uint64_t)
    int64x1_t vdup_n_s64 (int64_t)
    uint32x4_t vdupq_n_u32 (uint32_t)
    指令格式: vdup.32 q0, r0
    uint16x8_t vdupq_n_u16 (uint16_t)
    指令格式: vdup.16 q0, r0
    uint8x16_t vdupq_n_u8 (uint8_t)
    指令格式: vdup.8 q0, r0
    int32x4_t vdupq_n_s32 (int32_t)
    指令格式: vdup.32 q0, r0
    int16x8_t vdupq_n_s16 (int16_t)
    指令格式: vdup.16 q0, r0
    int8x16_t vdupq_n_s8 (int8_t)
    指令格式: vdup.8 q0, r0
    float32x4_t vdupq_n_f32 (float32_t)
    指令格式: vdup.32 q0, r0
    poly16x8_t vdupq_n_p16 (poly16_t)
    指令格式: vdup.16 q0, r0
    poly8x16_t vdupq_n_p8 (poly8_t)
    指令格式: vdup.8 q0, r0
    uint64x2_t vdupq_n_u64 (uint64_t)
    int64x2_t vdupq_n_s64 (int64_t)
    uint32x2_t vmov_n_u32 (uint32_t)
    指令格式: vdup.32 d0, r0
    uint16x4_t vmov_n_u16 (uint16_t)
    指令格式: vdup.16 d0, r0
    uint8x8_t vmov_n_u8 (uint8_t)
    指令格式: vdup.8 d0, r0
    int32x2_t vmov_n_s32 (int32_t)
    指令格式: vdup.32 d0, r0
    int16x4_t vmov_n_s16 (int16_t)
    指令格式: vdup.16 d0, r0
    int8x8_t vmov_n_s8 (int8_t)
    指令格式: vdup.8 d0, r0
    float32x2_t vmov_n_f32 (float32_t)
    指令格式: vdup.32 d0, r0
    poly16x4_t vmov_n_p16 (poly16_t)
    指令格式: vdup.16 d0, r0
    poly8x8_t vmov_n_p8 (poly8_t)
    指令格式: vdup.8 d0, r0
    uint64x1_t vmov_n_u64 (uint64_t)
    int64x1_t vmov_n_s64 (int64_t)
    uint32x4_t vmovq_n_u32 (uint32_t)
    指令格式: vdup.32 q0, r0
    uint16x8_t vmovq_n_u16 (uint16_t)
    指令格式: vdup.16 q0, r0
    uint8x16_t vmovq_n_u8 (uint8_t)
    指令格式: vdup.8 q0, r0
    int32x4_t vmovq_n_s32 (int32_t)
    指令格式: vdup.32 q0, r0
    int16x8_t vmovq_n_s16 (int16_t)
    指令格式: vdup.16 q0, r0
    int8x16_t vmovq_n_s8 (int8_t)
    指令格式: vdup.8 q0, r0
    float32x4_t vmovq_n_f32 (float32_t)
    指令格式: vdup.32 q0, r0
    poly16x8_t vmovq_n_p16 (poly16_t)
    指令格式: vdup.16 q0, r0
    poly8x16_t vmovq_n_p8 (poly8_t)
    指令格式: vdup.8 q0, r0
    uint64x2_t vmovq_n_u64 (uint64_t)
    int64x2_t vmovq_n_s64 (int64_t)
    uint32x2_t vdup_lane_u32 (uint32x2_t, const int)
    指令格式: vdup.32 d0, d0[0]
    uint16x4_t vdup_lane_u16 (uint16x4_t, const int)
    指令格式: vdup.16 d0, d0[0]
    uint8x8_t vdup_lane_u8 (uint8x8_t, const int)
    指令格式: vdup.8 d0, d0[0]
    int32x2_t vdup_lane_s32 (int32x2_t, const int)
    指令格式: vdup.32 d0, d0[0]
    int16x4_t vdup_lane_s16 (int16x4_t, const int)
    指令格式: vdup.16 d0, d0[0]
    int8x8_t vdup_lane_s8 (int8x8_t, const int)
    指令格式: vdup.8 d0, d0[0]
    float32x2_t vdup_lane_f32 (float32x2_t, const int)
    指令格式: vdup.32 d0, d0[0]
    poly16x4_t vdup_lane_p16 (poly16x4_t, const int)
    指令格式: vdup.16 d0, d0[0]
    poly8x8_t vdup_lane_p8 (poly8x8_t, const int)
    指令格式: vdup.8 d0, d0[0]
    uint64x1_t vdup_lane_u64 (uint64x1_t, const int)
    int64x1_t vdup_lane_s64 (int64x1_t, const int)
    uint32x4_t vdupq_lane_u32 (uint32x2_t, const int)
    指令格式: vdup.32 q0, d0[0]
    uint16x8_t vdupq_lane_u16 (uint16x4_t, const int)
    指令格式: vdup.16 q0, d0[0]
    uint8x16_t vdupq_lane_u8 (uint8x8_t, const int)
    指令格式: vdup.8 q0, d0[0]
    int32x4_t vdupq_lane_s32 (int32x2_t, const int)
    指令格式: vdup.32 q0, d0[0]
    int16x8_t vdupq_lane_s16 (int16x4_t, const int)
    指令格式: vdup.16 q0, d0[0]
    int8x16_t vdupq_lane_s8 (int8x8_t, const int)
    指令格式: vdup.8 q0, d0[0]
    float32x4_t vdupq_lane_f32 (float32x2_t, const int)
    指令格式: vdup.32 q0, d0[0]
    poly16x8_t vdupq_lane_p16 (poly16x4_t, const int)
    指令格式: vdup.16 q0, d0[0]
    poly8x16_t vdupq_lane_p8 (poly8x8_t, const int)
    指令格式: vdup.8 q0, d0[0]
    uint64x2_t vdupq_lane_u64 (uint64x1_t, const int)
    int64x2_t vdupq_lane_s64 (int64x1_t, const int) 

.43 Combining vectors

    uint32x4_t vcombine_u32 (uint32x2_t, uint32x2_t)
    uint16x8_t vcombine_u16 (uint16x4_t, uint16x4_t)
    uint8x16_t vcombine_u8 (uint8x8_t, uint8x8_t)
    int32x4_t vcombine_s32 (int32x2_t, int32x2_t)
    int16x8_t vcombine_s16 (int16x4_t, int16x4_t)
    int8x16_t vcombine_s8 (int8x8_t, int8x8_t)
    uint64x2_t vcombine_u64 (uint64x1_t, uint64x1_t)
    int64x2_t vcombine_s64 (int64x1_t, int64x1_t)
    float32x4_t vcombine_f32 (float32x2_t, float32x2_t)
    poly16x8_t vcombine_p16 (poly16x4_t, poly16x4_t)
    poly8x16_t vcombine_p8 (poly8x8_t, poly8x8_t) 

.44 Splitting vectors

    uint32x2_t vget_high_u32 (uint32x4_t)
    uint16x4_t vget_high_u16 (uint16x8_t)
    uint8x8_t vget_high_u8 (uint8x16_t)
    int32x2_t vget_high_s32 (int32x4_t)
    int16x4_t vget_high_s16 (int16x8_t)
    int8x8_t vget_high_s8 (int8x16_t)
    uint64x1_t vget_high_u64 (uint64x2_t)
    int64x1_t vget_high_s64 (int64x2_t)
    float32x2_t vget_high_f32 (float32x4_t)
    poly16x4_t vget_high_p16 (poly16x8_t)
    poly8x8_t vget_high_p8 (poly8x16_t)
    uint32x2_t vget_low_u32 (uint32x4_t)
    指令格式: vmov d0, d0
    uint16x4_t vget_low_u16 (uint16x8_t)
    指令格式: vmov d0, d0
    uint8x8_t vget_low_u8 (uint8x16_t)
    指令格式: vmov d0, d0
    int32x2_t vget_low_s32 (int32x4_t)
    指令格式: vmov d0, d0
    int16x4_t vget_low_s16 (int16x8_t)
    指令格式: vmov d0, d0
    int8x8_t vget_low_s8 (int8x16_t)
    指令格式: vmov d0, d0
    float32x2_t vget_low_f32 (float32x4_t)
    指令格式: vmov d0, d0
    poly16x4_t vget_low_p16 (poly16x8_t)
    指令格式: vmov d0, d0
    poly8x8_t vget_low_p8 (poly8x16_t)
    指令格式: vmov d0, d0
    uint64x1_t vget_low_u64 (uint64x2_t)
    int64x1_t vget_low_s64 (int64x2_t) 

.45 Conversions

    float32x2_t vcvt_f32_u32 (uint32x2_t)
    指令格式: vcvt.f32.u32 d0, d0
    float32x2_t vcvt_f32_s32 (int32x2_t)
    指令格式: vcvt.f32.s32 d0, d0
    uint32x2_t vcvt_u32_f32 (float32x2_t)
    指令格式: vcvt.u32.f32 d0, d0
    int32x2_t vcvt_s32_f32 (float32x2_t)
    指令格式: vcvt.s32.f32 d0, d0
    float32x4_t vcvtq_f32_u32 (uint32x4_t)
    指令格式: vcvt.f32.u32 q0, q0
    float32x4_t vcvtq_f32_s32 (int32x4_t)
    指令格式: vcvt.f32.s32 q0, q0
    uint32x4_t vcvtq_u32_f32 (float32x4_t)
    指令格式: vcvt.u32.f32 q0, q0
    int32x4_t vcvtq_s32_f32 (float32x4_t)
    指令格式: vcvt.s32.f32 q0, q0
    float32x2_t vcvt_n_f32_u32 (uint32x2_t, const int)
    指令格式: vcvt.f32.u32 d0, d0, #0
    float32x2_t vcvt_n_f32_s32 (int32x2_t, const int)
    指令格式: vcvt.f32.s32 d0, d0, #0
    uint32x2_t vcvt_n_u32_f32 (float32x2_t, const int)
    指令格式: vcvt.u32.f32 d0, d0, #0
    int32x2_t vcvt_n_s32_f32 (float32x2_t, const int)
    指令格式: vcvt.s32.f32 d0, d0, #0
    float32x4_t vcvtq_n_f32_u32 (uint32x4_t, const int)
    指令格式: vcvt.f32.u32 q0, q0, #0
    float32x4_t vcvtq_n_f32_s32 (int32x4_t, const int)
    指令格式: vcvt.f32.s32 q0, q0, #0
    uint32x4_t vcvtq_n_u32_f32 (float32x4_t, const int)
    指令格式: vcvt.u32.f32 q0, q0, #0
    int32x4_t vcvtq_n_s32_f32 (float32x4_t, const int)
    指令格式: vcvt.s32.f32 q0, q0, #0 

.46 Move, single_opcode narrowing

    uint32x2_t vmovn_u64 (uint64x2_t)
    指令格式: vmovn.i64 d0, q0
    uint16x4_t vmovn_u32 (uint32x4_t)
    指令格式: vmovn.i32 d0, q0
    uint8x8_t vmovn_u16 (uint16x8_t)
    指令格式: vmovn.i16 d0, q0
    int32x2_t vmovn_s64 (int64x2_t)
    指令格式: vmovn.i64 d0, q0
    int16x4_t vmovn_s32 (int32x4_t)
    指令格式: vmovn.i32 d0, q0
    int8x8_t vmovn_s16 (int16x8_t)
    指令格式: vmovn.i16 d0, q0
    uint32x2_t vqmovn_u64 (uint64x2_t)
    指令格式: vqmovn.u64 d0, q0
    uint16x4_t vqmovn_u32 (uint32x4_t)
    指令格式: vqmovn.u32 d0, q0
    uint8x8_t vqmovn_u16 (uint16x8_t)
    指令格式: vqmovn.u16 d0, q0
    int32x2_t vqmovn_s64 (int64x2_t)
    指令格式: vqmovn.s64 d0, q0
    int16x4_t vqmovn_s32 (int32x4_t)
    指令格式: vqmovn.s32 d0, q0
    int8x8_t vqmovn_s16 (int16x8_t)
    指令格式: vqmovn.s16 d0, q0
    uint32x2_t vqmovun_s64 (int64x2_t)
    指令格式: vqmovun.s64 d0, q0
    uint16x4_t vqmovun_s32 (int32x4_t)
    指令格式: vqmovun.s32 d0, q0
    uint8x8_t vqmovun_s16 (int16x8_t)
    指令格式: vqmovun.s16 d0, q0 

.47 Move, single_opcode long

    uint64x2_t vmovl_u32 (uint32x2_t)
    指令格式: vmovl.u32 q0, d0
    uint32x4_t vmovl_u16 (uint16x4_t)
    指令格式: vmovl.u16 q0, d0
    uint16x8_t vmovl_u8 (uint8x8_t)
    指令格式: vmovl.u8 q0, d0
    int64x2_t vmovl_s32 (int32x2_t)
    指令格式: vmovl.s32 q0, d0
    int32x4_t vmovl_s16 (int16x4_t)
    指令格式: vmovl.s16 q0, d0
    int16x8_t vmovl_s8 (int8x8_t)
    指令格式: vmovl.s8 q0, d0 

.48 Table lookup

    poly8x8_t vtbl1_p8 (poly8x8_t, uint8x8_t)
    指令格式: vtbl.8 d0, {d0}, d0
    int8x8_t vtbl1_s8 (int8x8_t, int8x8_t)
    指令格式: vtbl.8 d0, {d0}, d0
    uint8x8_t vtbl1_u8 (uint8x8_t, uint8x8_t)
    指令格式: vtbl.8 d0, {d0}, d0
    poly8x8_t vtbl2_p8 (poly8x8x2_t, uint8x8_t)
    指令格式: vtbl.8 d0, {d0, d1}, d0
    int8x8_t vtbl2_s8 (int8x8x2_t, int8x8_t)
    指令格式: vtbl.8 d0, {d0, d1}, d0
    uint8x8_t vtbl2_u8 (uint8x8x2_t, uint8x8_t)
    指令格式: vtbl.8 d0, {d0, d1}, d0
    poly8x8_t vtbl3_p8 (poly8x8x3_t, uint8x8_t)
    指令格式: vtbl.8 d0, {d0, d1, d2}, d0
    int8x8_t vtbl3_s8 (int8x8x3_t, int8x8_t)
    指令格式: vtbl.8 d0, {d0, d1, d2}, d0
    uint8x8_t vtbl3_u8 (uint8x8x3_t, uint8x8_t)
    指令格式: vtbl.8 d0, {d0, d1, d2}, d0
    poly8x8_t vtbl4_p8 (poly8x8x4_t, uint8x8_t)
    指令格式: vtbl.8 d0, {d0, d1, d2, d3}, d0
    int8x8_t vtbl4_s8 (int8x8x4_t, int8x8_t)
    指令格式: vtbl.8 d0, {d0, d1, d2, d3}, d0
    uint8x8_t vtbl4_u8 (uint8x8x4_t, uint8x8_t)
    指令格式: vtbl.8 d0, {d0, d1, d2, d3}, d0 

.49 Extended table lookup

    poly8x8_t vtbx1_p8 (poly8x8_t, poly8x8_t, uint8x8_t)
    指令格式: vtbx.8 d0, {d0}, d0
    int8x8_t vtbx1_s8 (int8x8_t, int8x8_t, int8x8_t)
    指令格式: vtbx.8 d0, {d0}, d0
    uint8x8_t vtbx1_u8 (uint8x8_t, uint8x8_t, uint8x8_t)
    指令格式: vtbx.8 d0, {d0}, d0
    poly8x8_t vtbx2_p8 (poly8x8_t, poly8x8x2_t, uint8x8_t)
    指令格式: vtbx.8 d0, {d0, d1}, d0
    int8x8_t vtbx2_s8 (int8x8_t, int8x8x2_t, int8x8_t)
    指令格式: vtbx.8 d0, {d0, d1}, d0
    uint8x8_t vtbx2_u8 (uint8x8_t, uint8x8x2_t, uint8x8_t)
    指令格式: vtbx.8 d0, {d0, d1}, d0
    poly8x8_t vtbx3_p8 (poly8x8_t, poly8x8x3_t, uint8x8_t)
    指令格式: vtbx.8 d0, {d0, d1, d2}, d0
    int8x8_t vtbx3_s8 (int8x8_t, int8x8x3_t, int8x8_t)
    指令格式: vtbx.8 d0, {d0, d1, d2}, d0
    uint8x8_t vtbx3_u8 (uint8x8_t, uint8x8x3_t, uint8x8_t)
    指令格式: vtbx.8 d0, {d0, d1, d2}, d0
    poly8x8_t vtbx4_p8 (poly8x8_t, poly8x8x4_t, uint8x8_t)
    指令格式: vtbx.8 d0, {d0, d1, d2, d3}, d0
    int8x8_t vtbx4_s8 (int8x8_t, int8x8x4_t, int8x8_t)
    指令格式: vtbx.8 d0, {d0, d1, d2, d3}, d0
    uint8x8_t vtbx4_u8 (uint8x8_t, uint8x8x4_t, uint8x8_t)
    指令格式: vtbx.8 d0, {d0, d1, d2, d3}, d0 

.50 Multiply, lane

    float32x2_t vmul_lane_f32 (float32x2_t, float32x2_t, const int)
    指令格式: vmul.f32 d0, d0, d0[0]
    uint32x2_t vmul_lane_u32 (uint32x2_t, uint32x2_t, const int)
    指令格式: vmul.i32 d0, d0, d0[0]
    uint16x4_t vmul_lane_u16 (uint16x4_t, uint16x4_t, const int)
    指令格式: vmul.i16 d0, d0, d0[0]
    int32x2_t vmul_lane_s32 (int32x2_t, int32x2_t, const int)
    指令格式: vmul.i32 d0, d0, d0[0]
    int16x4_t vmul_lane_s16 (int16x4_t, int16x4_t, const int)
    指令格式: vmul.i16 d0, d0, d0[0]
    float32x4_t vmulq_lane_f32 (float32x4_t, float32x2_t, const int)
    指令格式: vmul.f32 q0, q0, d0[0]
    uint32x4_t vmulq_lane_u32 (uint32x4_t, uint32x2_t, const int)
    指令格式: vmul.i32 q0, q0, d0[0]
    uint16x8_t vmulq_lane_u16 (uint16x8_t, uint16x4_t, const int)
    指令格式: vmul.i16 q0, q0, d0[0]
    int32x4_t vmulq_lane_s32 (int32x4_t, int32x2_t, const int)
    指令格式: vmul.i32 q0, q0, d0[0]
    int16x8_t vmulq_lane_s16 (int16x8_t, int16x4_t, const int)
    指令格式: vmul.i16 q0, q0, d0[0] 

.51 Long multiply, lane

    uint64x2_t vmull_lane_u32 (uint32x2_t, uint32x2_t, const int)
    指令格式: vmull.u32 q0, d0, d0[0]
    uint32x4_t vmull_lane_u16 (uint16x4_t, uint16x4_t, const int)
    指令格式: vmull.u16 q0, d0, d0[0]
    int64x2_t vmull_lane_s32 (int32x2_t, int32x2_t, const int)
    指令格式: vmull.s32 q0, d0, d0[0]
    int32x4_t vmull_lane_s16 (int16x4_t, int16x4_t, const int)
    指令格式: vmull.s16 q0, d0, d0[0] 

.52 Saturating doubling long multiply, lane

    int64x2_t vqdmull_lane_s32 (int32x2_t, int32x2_t, const int)
    指令格式: vqdmull.s32 q0, d0, d0[0]
    int32x4_t vqdmull_lane_s16 (int16x4_t, int16x4_t, const int)
    指令格式: vqdmull.s16 q0, d0, d0[0] 

.53 Saturating doubling multiply high, lane

    int32x4_t vqdmulhq_lane_s32 (int32x4_t, int32x2_t, const int)
    指令格式: vqdmulh.s32 q0, q0, d0[0]
    int16x8_t vqdmulhq_lane_s16 (int16x8_t, int16x4_t, const int)
    指令格式: vqdmulh.s16 q0, q0, d0[0]
    int32x2_t vqdmulh_lane_s32 (int32x2_t, int32x2_t, const int)
    指令格式: vqdmulh.s32 d0, d0, d0[0]
    int16x4_t vqdmulh_lane_s16 (int16x4_t, int16x4_t, const int)
    指令格式: vqdmulh.s16 d0, d0, d0[0]
    int32x4_t vqrdmulhq_lane_s32 (int32x4_t, int32x2_t, const int)
    指令格式: vqrdmulh.s32 q0, q0, d0[0]
    int16x8_t vqrdmulhq_lane_s16 (int16x8_t, int16x4_t, const int)
    指令格式: vqrdmulh.s16 q0, q0, d0[0]
    int32x2_t vqrdmulh_lane_s32 (int32x2_t, int32x2_t, const int)
    指令格式: vqrdmulh.s32 d0, d0, d0[0]
    int16x4_t vqrdmulh_lane_s16 (int16x4_t, int16x4_t, const int)
    指令格式: vqrdmulh.s16 d0, d0, d0[0] 

.54 Multiply-accumulate, lane

    float32x2_t vmla_lane_f32 (float32x2_t, float32x2_t, float32x2_t, const int)
    指令格式: vmla.f32 d0, d0, d0[0]
    uint32x2_t vmla_lane_u32 (uint32x2_t, uint32x2_t, uint32x2_t, const int)
    指令格式: vmla.i32 d0, d0, d0[0]
    uint16x4_t vmla_lane_u16 (uint16x4_t, uint16x4_t, uint16x4_t, const int)
    指令格式: vmla.i16 d0, d0, d0[0]
    int32x2_t vmla_lane_s32 (int32x2_t, int32x2_t, int32x2_t, const int)
    指令格式: vmla.i32 d0, d0, d0[0]
    int16x4_t vmla_lane_s16 (int16x4_t, int16x4_t, int16x4_t, const int)
    指令格式: vmla.i16 d0, d0, d0[0]
    float32x4_t vmlaq_lane_f32 (float32x4_t, float32x4_t, float32x2_t, const int)
    指令格式: vmla.f32 q0, q0, d0[0]
    uint32x4_t vmlaq_lane_u32 (uint32x4_t, uint32x4_t, uint32x2_t, const int)
    指令格式: vmla.i32 q0, q0, d0[0]
    uint16x8_t vmlaq_lane_u16 (uint16x8_t, uint16x8_t, uint16x4_t, const int)
    指令格式: vmla.i16 q0, q0, d0[0]
    int32x4_t vmlaq_lane_s32 (int32x4_t, int32x4_t, int32x2_t, const int)
    指令格式: vmla.i32 q0, q0, d0[0]
    int16x8_t vmlaq_lane_s16 (int16x8_t, int16x8_t, int16x4_t, const int)
    指令格式: vmla.i16 q0, q0, d0[0]
    uint64x2_t vmlal_lane_u32 (uint64x2_t, uint32x2_t, uint32x2_t, const int)
    指令格式: vmlal.u32 q0, d0, d0[0]
    uint32x4_t vmlal_lane_u16 (uint32x4_t, uint16x4_t, uint16x4_t, const int)
    指令格式: vmlal.u16 q0, d0, d0[0]
    int64x2_t vmlal_lane_s32 (int64x2_t, int32x2_t, int32x2_t, const int)
    指令格式: vmlal.s32 q0, d0, d0[0]
    int32x4_t vmlal_lane_s16 (int32x4_t, int16x4_t, int16x4_t, const int)
    指令格式: vmlal.s16 q0, d0, d0[0]
    int64x2_t vqdmlal_lane_s32 (int64x2_t, int32x2_t, int32x2_t, const int)
    指令格式: vqdmlal.s32 q0, d0, d0[0]
    int32x4_t vqdmlal_lane_s16 (int32x4_t, int16x4_t, int16x4_t, const int)
    指令格式: vqdmlal.s16 q0, d0, d0[0] 

.55 Multiply-subtract, lane

    float32x2_t vmls_lane_f32 (float32x2_t, float32x2_t, float32x2_t, const int)
    指令格式: vmls.f32 d0, d0, d0[0]
    uint32x2_t vmls_lane_u32 (uint32x2_t, uint32x2_t, uint32x2_t, const int)
    指令格式: vmls.i32 d0, d0, d0[0]
    uint16x4_t vmls_lane_u16 (uint16x4_t, uint16x4_t, uint16x4_t, const int)
    指令格式: vmls.i16 d0, d0, d0[0]
    int32x2_t vmls_lane_s32 (int32x2_t, int32x2_t, int32x2_t, const int)
    指令格式: vmls.i32 d0, d0, d0[0]
    int16x4_t vmls_lane_s16 (int16x4_t, int16x4_t, int16x4_t, const int)
    指令格式: vmls.i16 d0, d0, d0[0]
    float32x4_t vmlsq_lane_f32 (float32x4_t, float32x4_t, float32x2_t, const int)
    指令格式: vmls.f32 q0, q0, d0[0]
    uint32x4_t vmlsq_lane_u32 (uint32x4_t, uint32x4_t, uint32x2_t, const int)
    指令格式: vmls.i32 q0, q0, d0[0]
    uint16x8_t vmlsq_lane_u16 (uint16x8_t, uint16x8_t, uint16x4_t, const int)
    指令格式: vmls.i16 q0, q0, d0[0]
    int32x4_t vmlsq_lane_s32 (int32x4_t, int32x4_t, int32x2_t, const int)
    指令格式: vmls.i32 q0, q0, d0[0]
    int16x8_t vmlsq_lane_s16 (int16x8_t, int16x8_t, int16x4_t, const int)
    指令格式: vmls.i16 q0, q0, d0[0]
    uint64x2_t vmlsl_lane_u32 (uint64x2_t, uint32x2_t, uint32x2_t, const int)
    指令格式: vmlsl.u32 q0, d0, d0[0]
    uint32x4_t vmlsl_lane_u16 (uint32x4_t, uint16x4_t, uint16x4_t, const int)
    指令格式: vmlsl.u16 q0, d0, d0[0]
    int64x2_t vmlsl_lane_s32 (int64x2_t, int32x2_t, int32x2_t, const int)
    指令格式: vmlsl.s32 q0, d0, d0[0]
    int32x4_t vmlsl_lane_s16 (int32x4_t, int16x4_t, int16x4_t, const int)
    指令格式: vmlsl.s16 q0, d0, d0[0]
    int64x2_t vqdmlsl_lane_s32 (int64x2_t, int32x2_t, int32x2_t, const int)
    指令格式: vqdmlsl.s32 q0, d0, d0[0]
    int32x4_t vqdmlsl_lane_s16 (int32x4_t, int16x4_t, int16x4_t, const int)
    指令格式: vqdmlsl.s16 q0, d0, d0[0] 

.56 Vector multiply by scalar

    float32x2_t vmul_n_f32 (float32x2_t, float32_t)
    指令格式: vmul.f32 d0, d0, d0[0]
    uint32x2_t vmul_n_u32 (uint32x2_t, uint32_t)
    指令格式: vmul.i32 d0, d0, d0[0]
    uint16x4_t vmul_n_u16 (uint16x4_t, uint16_t)
    指令格式: vmul.i16 d0, d0, d0[0]
    int32x2_t vmul_n_s32 (int32x2_t, int32_t)
    指令格式: vmul.i32 d0, d0, d0[0]
    int16x4_t vmul_n_s16 (int16x4_t, int16_t)
    指令格式: vmul.i16 d0, d0, d0[0]
    float32x4_t vmulq_n_f32 (float32x4_t, float32_t)
    指令格式: vmul.f32 q0, q0, d0[0]
    uint32x4_t vmulq_n_u32 (uint32x4_t, uint32_t)
    指令格式: vmul.i32 q0, q0, d0[0]
    uint16x8_t vmulq_n_u16 (uint16x8_t, uint16_t)
    指令格式: vmul.i16 q0, q0, d0[0]
    int32x4_t vmulq_n_s32 (int32x4_t, int32_t)
    指令格式: vmul.i32 q0, q0, d0[0]
    int16x8_t vmulq_n_s16 (int16x8_t, int16_t)
    指令格式: vmul.i16 q0, q0, d0[0] 

.57 Vector long multiply by scalar

    uint64x2_t vmull_n_u32 (uint32x2_t, uint32_t)
    指令格式: vmull.u32 q0, d0, d0[0]
    uint32x4_t vmull_n_u16 (uint16x4_t, uint16_t)
    指令格式: vmull.u16 q0, d0, d0[0]
    int64x2_t vmull_n_s32 (int32x2_t, int32_t)
    指令格式: vmull.s32 q0, d0, d0[0]
    int32x4_t vmull_n_s16 (int16x4_t, int16_t)
    指令格式: vmull.s16 q0, d0, d0[0] 

.58 Vector saturating doubling long multiply by scalar

    int64x2_t vqdmull_n_s32 (int32x2_t, int32_t)
    指令格式: vqdmull.s32 q0, d0, d0[0]
    int32x4_t vqdmull_n_s16 (int16x4_t, int16_t)
    指令格式: vqdmull.s16 q0, d0, d0[0] 

.59 Vector saturating doubling multiply high by scalar

    int32x4_t vqdmulhq_n_s32 (int32x4_t, int32_t)
    指令格式: vqdmulh.s32 q0, q0, d0[0]
    int16x8_t vqdmulhq_n_s16 (int16x8_t, int16_t)
    指令格式: vqdmulh.s16 q0, q0, d0[0]
    int32x2_t vqdmulh_n_s32 (int32x2_t, int32_t)
    指令格式: vqdmulh.s32 d0, d0, d0[0]
    int16x4_t vqdmulh_n_s16 (int16x4_t, int16_t)
    指令格式: vqdmulh.s16 d0, d0, d0[0]
    int32x4_t vqrdmulhq_n_s32 (int32x4_t, int32_t)
    指令格式: vqrdmulh.s32 q0, q0, d0[0]
    int16x8_t vqrdmulhq_n_s16 (int16x8_t, int16_t)
    指令格式: vqrdmulh.s16 q0, q0, d0[0]
    int32x2_t vqrdmulh_n_s32 (int32x2_t, int32_t)
    指令格式: vqrdmulh.s32 d0, d0, d0[0]
    int16x4_t vqrdmulh_n_s16 (int16x4_t, int16_t)
    指令格式: vqrdmulh.s16 d0, d0, d0[0] 

.60 Vector multiply-accumulate by scalar

    float32x2_t vmla_n_f32 (float32x2_t, float32x2_t, float32_t)
    指令格式: vmla.f32 d0, d0, d0[0]
    uint32x2_t vmla_n_u32 (uint32x2_t, uint32x2_t, uint32_t)
    指令格式: vmla.i32 d0, d0, d0[0]
    uint16x4_t vmla_n_u16 (uint16x4_t, uint16x4_t, uint16_t)
    指令格式: vmla.i16 d0, d0, d0[0]
    int32x2_t vmla_n_s32 (int32x2_t, int32x2_t, int32_t)
    指令格式: vmla.i32 d0, d0, d0[0]
    int16x4_t vmla_n_s16 (int16x4_t, int16x4_t, int16_t)
    指令格式: vmla.i16 d0, d0, d0[0]
    float32x4_t vmlaq_n_f32 (float32x4_t, float32x4_t, float32_t)
    指令格式: vmla.f32 q0, q0, d0[0]
    uint32x4_t vmlaq_n_u32 (uint32x4_t, uint32x4_t, uint32_t)
    指令格式: vmla.i32 q0, q0, d0[0]
    uint16x8_t vmlaq_n_u16 (uint16x8_t, uint16x8_t, uint16_t)
    指令格式: vmla.i16 q0, q0, d0[0]
    int32x4_t vmlaq_n_s32 (int32x4_t, int32x4_t, int32_t)
    指令格式: vmla.i32 q0, q0, d0[0]
    int16x8_t vmlaq_n_s16 (int16x8_t, int16x8_t, int16_t)
    指令格式: vmla.i16 q0, q0, d0[0]
    uint64x2_t vmlal_n_u32 (uint64x2_t, uint32x2_t, uint32_t)
    指令格式: vmlal.u32 q0, d0, d0[0]
    uint32x4_t vmlal_n_u16 (uint32x4_t, uint16x4_t, uint16_t)
    指令格式: vmlal.u16 q0, d0, d0[0]
    int64x2_t vmlal_n_s32 (int64x2_t, int32x2_t, int32_t)
    指令格式: vmlal.s32 q0, d0, d0[0]
    int32x4_t vmlal_n_s16 (int32x4_t, int16x4_t, int16_t)
    指令格式: vmlal.s16 q0, d0, d0[0]
    int64x2_t vqdmlal_n_s32 (int64x2_t, int32x2_t, int32_t)
    指令格式: vqdmlal.s32 q0, d0, d0[0]
    int32x4_t vqdmlal_n_s16 (int32x4_t, int16x4_t, int16_t)
    指令格式: vqdmlal.s16 q0, d0, d0[0] 

.61 Vector multiply-subtract by scalar

    float32x2_t vmls_n_f32 (float32x2_t, float32x2_t, float32_t)
    指令格式: vmls.f32 d0, d0, d0[0]
    uint32x2_t vmls_n_u32 (uint32x2_t, uint32x2_t, uint32_t)
    指令格式: vmls.i32 d0, d0, d0[0]
    uint16x4_t vmls_n_u16 (uint16x4_t, uint16x4_t, uint16_t)
    指令格式: vmls.i16 d0, d0, d0[0]
    int32x2_t vmls_n_s32 (int32x2_t, int32x2_t, int32_t)
    指令格式: vmls.i32 d0, d0, d0[0]
    int16x4_t vmls_n_s16 (int16x4_t, int16x4_t, int16_t)
    指令格式: vmls.i16 d0, d0, d0[0]
    float32x4_t vmlsq_n_f32 (float32x4_t, float32x4_t, float32_t)
    指令格式: vmls.f32 q0, q0, d0[0]
    uint32x4_t vmlsq_n_u32 (uint32x4_t, uint32x4_t, uint32_t)
    指令格式: vmls.i32 q0, q0, d0[0]
    uint16x8_t vmlsq_n_u16 (uint16x8_t, uint16x8_t, uint16_t)
    指令格式: vmls.i16 q0, q0, d0[0]
    int32x4_t vmlsq_n_s32 (int32x4_t, int32x4_t, int32_t)
    指令格式: vmls.i32 q0, q0, d0[0]
    int16x8_t vmlsq_n_s16 (int16x8_t, int16x8_t, int16_t)
    指令格式: vmls.i16 q0, q0, d0[0]
    uint64x2_t vmlsl_n_u32 (uint64x2_t, uint32x2_t, uint32_t)
    指令格式: vmlsl.u32 q0, d0, d0[0]
    uint32x4_t vmlsl_n_u16 (uint32x4_t, uint16x4_t, uint16_t)
    指令格式: vmlsl.u16 q0, d0, d0[0]
    int64x2_t vmlsl_n_s32 (int64x2_t, int32x2_t, int32_t)
    指令格式: vmlsl.s32 q0, d0, d0[0]
    int32x4_t vmlsl_n_s16 (int32x4_t, int16x4_t, int16_t)
    指令格式: vmlsl.s16 q0, d0, d0[0]
    int64x2_t vqdmlsl_n_s32 (int64x2_t, int32x2_t, int32_t)
    指令格式: vqdmlsl.s32 q0, d0, d0[0]
    int32x4_t vqdmlsl_n_s16 (int32x4_t, int16x4_t, int16_t)
    指令格式: vqdmlsl.s16 q0, d0, d0[0] 

.62 Vector extract

    uint32x2_t vext_u32 (uint32x2_t, uint32x2_t, const int)
    指令格式: vext.32 d0, d0, d0, #0
    uint16x4_t vext_u16 (uint16x4_t, uint16x4_t, const int)
    指令格式: vext.16 d0, d0, d0, #0
    uint8x8_t vext_u8 (uint8x8_t, uint8x8_t, const int)
    指令格式: vext.8 d0, d0, d0, #0
    int32x2_t vext_s32 (int32x2_t, int32x2_t, const int)
    指令格式: vext.32 d0, d0, d0, #0
    int16x4_t vext_s16 (int16x4_t, int16x4_t, const int)
    指令格式: vext.16 d0, d0, d0, #0
    int8x8_t vext_s8 (int8x8_t, int8x8_t, const int)
    指令格式: vext.8 d0, d0, d0, #0
    uint64x1_t vext_u64 (uint64x1_t, uint64x1_t, const int)
    指令格式: vext.64 d0, d0, d0, #0
    int64x1_t vext_s64 (int64x1_t, int64x1_t, const int)
    指令格式: vext.64 d0, d0, d0, #0
    float32x2_t vext_f32 (float32x2_t, float32x2_t, const int)
    指令格式: vext.32 d0, d0, d0, #0
    poly16x4_t vext_p16 (poly16x4_t, poly16x4_t, const int)
    指令格式: vext.16 d0, d0, d0, #0
    poly8x8_t vext_p8 (poly8x8_t, poly8x8_t, const int)
    指令格式: vext.8 d0, d0, d0, #0
    uint32x4_t vextq_u32 (uint32x4_t, uint32x4_t, const int)
    指令格式: vext.32 q0, q0, q0, #0
    uint16x8_t vextq_u16 (uint16x8_t, uint16x8_t, const int)
    指令格式: vext.16 q0, q0, q0, #0
    uint8x16_t vextq_u8 (uint8x16_t, uint8x16_t, const int)
    指令格式: vext.8 q0, q0, q0, #0
    int32x4_t vextq_s32 (int32x4_t, int32x4_t, const int)
    指令格式: vext.32 q0, q0, q0, #0
    int16x8_t vextq_s16 (int16x8_t, int16x8_t, const int)
    指令格式: vext.16 q0, q0, q0, #0
    int8x16_t vextq_s8 (int8x16_t, int8x16_t, const int)
    指令格式: vext.8 q0, q0, q0, #0
    uint64x2_t vextq_u64 (uint64x2_t, uint64x2_t, const int)
    指令格式: vext.64 q0, q0, q0, #0
    int64x2_t vextq_s64 (int64x2_t, int64x2_t, const int)
    指令格式: vext.64 q0, q0, q0, #0
    float32x4_t vextq_f32 (float32x4_t, float32x4_t, const int)
    指令格式: vext.32 q0, q0, q0, #0
    poly16x8_t vextq_p16 (poly16x8_t, poly16x8_t, const int)
    指令格式: vext.16 q0, q0, q0, #0
    poly8x16_t vextq_p8 (poly8x16_t, poly8x16_t, const int)
    指令格式: vext.8 q0, q0, q0, #0 

.63 Reverse elements

    uint32x2_t vrev64_u32 (uint32x2_t)
    指令格式: vrev64.32 d0, d0
    uint16x4_t vrev64_u16 (uint16x4_t)
    指令格式: vrev64.16 d0, d0
    uint8x8_t vrev64_u8 (uint8x8_t)
    指令格式: vrev64.8 d0, d0
    int32x2_t vrev64_s32 (int32x2_t)
    指令格式: vrev64.32 d0, d0
    int16x4_t vrev64_s16 (int16x4_t)
    指令格式: vrev64.16 d0, d0
    int8x8_t vrev64_s8 (int8x8_t)
    指令格式: vrev64.8 d0, d0
    float32x2_t vrev64_f32 (float32x2_t)
    指令格式: vrev64.32 d0, d0
    poly16x4_t vrev64_p16 (poly16x4_t)
    指令格式: vrev64.16 d0, d0
    poly8x8_t vrev64_p8 (poly8x8_t)
    指令格式: vrev64.8 d0, d0
    uint32x4_t vrev64q_u32 (uint32x4_t)
    指令格式: vrev64.32 q0, q0
    uint16x8_t vrev64q_u16 (uint16x8_t)
    指令格式: vrev64.16 q0, q0
    uint8x16_t vrev64q_u8 (uint8x16_t)
    指令格式: vrev64.8 q0, q0
    int32x4_t vrev64q_s32 (int32x4_t)
    指令格式: vrev64.32 q0, q0
    int16x8_t vrev64q_s16 (int16x8_t)
    指令格式: vrev64.16 q0, q0
    int8x16_t vrev64q_s8 (int8x16_t)
    指令格式: vrev64.8 q0, q0
    float32x4_t vrev64q_f32 (float32x4_t)
    指令格式: vrev64.32 q0, q0
    poly16x8_t vrev64q_p16 (poly16x8_t)
    指令格式: vrev64.16 q0, q0
    poly8x16_t vrev64q_p8 (poly8x16_t)
    指令格式: vrev64.8 q0, q0
    uint16x4_t vrev32_u16 (uint16x4_t)
    指令格式: vrev32.16 d0, d0
    int16x4_t vrev32_s16 (int16x4_t)
    指令格式: vrev32.16 d0, d0
    uint8x8_t vrev32_u8 (uint8x8_t)
    指令格式: vrev32.8 d0, d0
    int8x8_t vrev32_s8 (int8x8_t)
    指令格式: vrev32.8 d0, d0
    poly16x4_t vrev32_p16 (poly16x4_t)
    指令格式: vrev32.16 d0, d0
    poly8x8_t vrev32_p8 (poly8x8_t)
    指令格式: vrev32.8 d0, d0
    uint16x8_t vrev32q_u16 (uint16x8_t)
    指令格式: vrev32.16 q0, q0
    int16x8_t vrev32q_s16 (int16x8_t)
    指令格式: vrev32.16 q0, q0
    uint8x16_t vrev32q_u8 (uint8x16_t)
    指令格式: vrev32.8 q0, q0
    int8x16_t vrev32q_s8 (int8x16_t)
    指令格式: vrev32.8 q0, q0
    poly16x8_t vrev32q_p16 (poly16x8_t)
    指令格式: vrev32.16 q0, q0
    poly8x16_t vrev32q_p8 (poly8x16_t)
    指令格式: vrev32.8 q0, q0
    uint8x8_t vrev16_u8 (uint8x8_t)
    指令格式: vrev16.8 d0, d0
    int8x8_t vrev16_s8 (int8x8_t)
    指令格式: vrev16.8 d0, d0
    poly8x8_t vrev16_p8 (poly8x8_t)
    指令格式: vrev16.8 d0, d0
    uint8x16_t vrev16q_u8 (uint8x16_t)
    指令格式: vrev16.8 q0, q0
    int8x16_t vrev16q_s8 (int8x16_t)
    指令格式: vrev16.8 q0, q0
    poly8x16_t vrev16q_p8 (poly8x16_t)
    指令格式: vrev16.8 q0, q0 

.64 Bit selection

    uint32x2_t vbsl_u32 (uint32x2_t, uint32x2_t, uint32x2_t)
    指令格式: vbsl d0, d0, d0 or vbit d0, d0, d0 or vbif d0, d0, d0
    uint16x4_t vbsl_u16 (uint16x4_t, uint16x4_t, uint16x4_t)
    指令格式: vbsl d0, d0, d0 or vbit d0, d0, d0 or vbif d0, d0, d0
    uint8x8_t vbsl_u8 (uint8x8_t, uint8x8_t, uint8x8_t)
    指令格式: vbsl d0, d0, d0 or vbit d0, d0, d0 or vbif d0, d0, d0
    int32x2_t vbsl_s32 (uint32x2_t, int32x2_t, int32x2_t)
    指令格式: vbsl d0, d0, d0 or vbit d0, d0, d0 or vbif d0, d0, d0
    int16x4_t vbsl_s16 (uint16x4_t, int16x4_t, int16x4_t)
    指令格式: vbsl d0, d0, d0 or vbit d0, d0, d0 or vbif d0, d0, d0
    int8x8_t vbsl_s8 (uint8x8_t, int8x8_t, int8x8_t)
    指令格式: vbsl d0, d0, d0 or vbit d0, d0, d0 or vbif d0, d0, d0
    uint64x1_t vbsl_u64 (uint64x1_t, uint64x1_t, uint64x1_t)
    指令格式: vbsl d0, d0, d0 or vbit d0, d0, d0 or vbif d0, d0, d0
    int64x1_t vbsl_s64 (uint64x1_t, int64x1_t, int64x1_t)
    指令格式: vbsl d0, d0, d0 or vbit d0, d0, d0 or vbif d0, d0, d0
    float32x2_t vbsl_f32 (uint32x2_t, float32x2_t, float32x2_t)
    指令格式: vbsl d0, d0, d0 or vbit d0, d0, d0 or vbif d0, d0, d0
    poly16x4_t vbsl_p16 (uint16x4_t, poly16x4_t, poly16x4_t)
    指令格式: vbsl d0, d0, d0 or vbit d0, d0, d0 or vbif d0, d0, d0
    poly8x8_t vbsl_p8 (uint8x8_t, poly8x8_t, poly8x8_t)
    指令格式: vbsl d0, d0, d0 or vbit d0, d0, d0 or vbif d0, d0, d0
    uint32x4_t vbslq_u32 (uint32x4_t, uint32x4_t, uint32x4_t)
    指令格式: vbsl q0, q0, q0 or vbit q0, q0, q0 or vbif q0, q0, q0
    uint16x8_t vbslq_u16 (uint16x8_t, uint16x8_t, uint16x8_t)
    指令格式: vbsl q0, q0, q0 or vbit q0, q0, q0 or vbif q0, q0, q0
    uint8x16_t vbslq_u8 (uint8x16_t, uint8x16_t, uint8x16_t)
    指令格式: vbsl q0, q0, q0 or vbit q0, q0, q0 or vbif q0, q0, q0
    int32x4_t vbslq_s32 (uint32x4_t, int32x4_t, int32x4_t)
    指令格式: vbsl q0, q0, q0 or vbit q0, q0, q0 or vbif q0, q0, q0
    int16x8_t vbslq_s16 (uint16x8_t, int16x8_t, int16x8_t)
    指令格式: vbsl q0, q0, q0 or vbit q0, q0, q0 or vbif q0, q0, q0
    int8x16_t vbslq_s8 (uint8x16_t, int8x16_t, int8x16_t)
    指令格式: vbsl q0, q0, q0 or vbit q0, q0, q0 or vbif q0, q0, q0
    uint64x2_t vbslq_u64 (uint64x2_t, uint64x2_t, uint64x2_t)
    指令格式: vbsl q0, q0, q0 or vbit q0, q0, q0 or vbif q0, q0, q0
    int64x2_t vbslq_s64 (uint64x2_t, int64x2_t, int64x2_t)
    指令格式: vbsl q0, q0, q0 or vbit q0, q0, q0 or vbif q0, q0, q0
    float32x4_t vbslq_f32 (uint32x4_t, float32x4_t, float32x4_t)
    指令格式: vbsl q0, q0, q0 or vbit q0, q0, q0 or vbif q0, q0, q0
    poly16x8_t vbslq_p16 (uint16x8_t, poly16x8_t, poly16x8_t)
    指令格式: vbsl q0, q0, q0 or vbit q0, q0, q0 or vbif q0, q0, q0
    poly8x16_t vbslq_p8 (uint8x16_t, poly8x16_t, poly8x16_t)
    指令格式: vbsl q0, q0, q0 or vbit q0, q0, q0 or vbif q0, q0, q0 

.65 Transpose elements

    uint32x2x2_t vtrn_u32 (uint32x2_t, uint32x2_t)
    指令格式: vtrn.32 d0, d1
    uint16x4x2_t vtrn_u16 (uint16x4_t, uint16x4_t)
    指令格式: vtrn.16 d0, d1
    uint8x8x2_t vtrn_u8 (uint8x8_t, uint8x8_t)
    指令格式: vtrn.8 d0, d1
    int32x2x2_t vtrn_s32 (int32x2_t, int32x2_t)
    指令格式: vtrn.32 d0, d1
    int16x4x2_t vtrn_s16 (int16x4_t, int16x4_t)
    指令格式: vtrn.16 d0, d1
    int8x8x2_t vtrn_s8 (int8x8_t, int8x8_t)
    指令格式: vtrn.8 d0, d1
    float32x2x2_t vtrn_f32 (float32x2_t, float32x2_t)
    指令格式: vtrn.32 d0, d1
    poly16x4x2_t vtrn_p16 (poly16x4_t, poly16x4_t)
    指令格式: vtrn.16 d0, d1
    poly8x8x2_t vtrn_p8 (poly8x8_t, poly8x8_t)
    指令格式: vtrn.8 d0, d1
    uint32x4x2_t vtrnq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vtrn.32 q0, q1
    uint16x8x2_t vtrnq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vtrn.16 q0, q1
    uint8x16x2_t vtrnq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vtrn.8 q0, q1
    int32x4x2_t vtrnq_s32 (int32x4_t, int32x4_t)
    指令格式: vtrn.32 q0, q1
    int16x8x2_t vtrnq_s16 (int16x8_t, int16x8_t)
    指令格式: vtrn.16 q0, q1
    int8x16x2_t vtrnq_s8 (int8x16_t, int8x16_t)
    指令格式: vtrn.8 q0, q1
    float32x4x2_t vtrnq_f32 (float32x4_t, float32x4_t)
    指令格式: vtrn.32 q0, q1
    poly16x8x2_t vtrnq_p16 (poly16x8_t, poly16x8_t)
    指令格式: vtrn.16 q0, q1
    poly8x16x2_t vtrnq_p8 (poly8x16_t, poly8x16_t)
    指令格式: vtrn.8 q0, q1 

.66 Zip elements

    uint32x2x2_t vzip_u32 (uint32x2_t, uint32x2_t)
    指令格式: vzip.32 d0, d1
    uint16x4x2_t vzip_u16 (uint16x4_t, uint16x4_t)
    指令格式: vzip.16 d0, d1
    uint8x8x2_t vzip_u8 (uint8x8_t, uint8x8_t)
    指令格式: vzip.8 d0, d1
    int32x2x2_t vzip_s32 (int32x2_t, int32x2_t)
    指令格式: vzip.32 d0, d1
    int16x4x2_t vzip_s16 (int16x4_t, int16x4_t)
    指令格式: vzip.16 d0, d1
    int8x8x2_t vzip_s8 (int8x8_t, int8x8_t)
    指令格式: vzip.8 d0, d1
    float32x2x2_t vzip_f32 (float32x2_t, float32x2_t)
    指令格式: vzip.32 d0, d1
    poly16x4x2_t vzip_p16 (poly16x4_t, poly16x4_t)
    指令格式: vzip.16 d0, d1
    poly8x8x2_t vzip_p8 (poly8x8_t, poly8x8_t)
    指令格式: vzip.8 d0, d1
    uint32x4x2_t vzipq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vzip.32 q0, q1
    uint16x8x2_t vzipq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vzip.16 q0, q1
    uint8x16x2_t vzipq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vzip.8 q0, q1
    int32x4x2_t vzipq_s32 (int32x4_t, int32x4_t)
    指令格式: vzip.32 q0, q1
    int16x8x2_t vzipq_s16 (int16x8_t, int16x8_t)
    指令格式: vzip.16 q0, q1
    int8x16x2_t vzipq_s8 (int8x16_t, int8x16_t)
    指令格式: vzip.8 q0, q1
    float32x4x2_t vzipq_f32 (float32x4_t, float32x4_t)
    指令格式: vzip.32 q0, q1
    poly16x8x2_t vzipq_p16 (poly16x8_t, poly16x8_t)
    指令格式: vzip.16 q0, q1
    poly8x16x2_t vzipq_p8 (poly8x16_t, poly8x16_t)
    指令格式: vzip.8 q0, q1 

.67 Unzip elements

    uint32x2x2_t vuzp_u32 (uint32x2_t, uint32x2_t)
    指令格式: vuzp.32 d0, d1
    uint16x4x2_t vuzp_u16 (uint16x4_t, uint16x4_t)
    指令格式: vuzp.16 d0, d1
    uint8x8x2_t vuzp_u8 (uint8x8_t, uint8x8_t)
    指令格式: vuzp.8 d0, d1
    int32x2x2_t vuzp_s32 (int32x2_t, int32x2_t)
    指令格式: vuzp.32 d0, d1
    int16x4x2_t vuzp_s16 (int16x4_t, int16x4_t)
    指令格式: vuzp.16 d0, d1
    int8x8x2_t vuzp_s8 (int8x8_t, int8x8_t)
    指令格式: vuzp.8 d0, d1
    float32x2x2_t vuzp_f32 (float32x2_t, float32x2_t)
    指令格式: vuzp.32 d0, d1
    poly16x4x2_t vuzp_p16 (poly16x4_t, poly16x4_t)
    指令格式: vuzp.16 d0, d1
    poly8x8x2_t vuzp_p8 (poly8x8_t, poly8x8_t)
    指令格式: vuzp.8 d0, d1
    uint32x4x2_t vuzpq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vuzp.32 q0, q1
    uint16x8x2_t vuzpq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vuzp.16 q0, q1
    uint8x16x2_t vuzpq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vuzp.8 q0, q1
    int32x4x2_t vuzpq_s32 (int32x4_t, int32x4_t)
    指令格式: vuzp.32 q0, q1
    int16x8x2_t vuzpq_s16 (int16x8_t, int16x8_t)
    指令格式: vuzp.16 q0, q1
    int8x16x2_t vuzpq_s8 (int8x16_t, int8x16_t)
    指令格式: vuzp.8 q0, q1
    float32x4x2_t vuzpq_f32 (float32x4_t, float32x4_t)
    指令格式: vuzp.32 q0, q1
    poly16x8x2_t vuzpq_p16 (poly16x8_t, poly16x8_t)
    指令格式: vuzp.16 q0, q1
    poly8x16x2_t vuzpq_p8 (poly8x16_t, poly8x16_t)
    指令格式: vuzp.8 q0, q1 

.68 Element/structure loads, VLD1 variants

    uint32x2_t vld1_u32 (const uint32_t *)
    指令格式: vld1.32 {d0}, [r0]
    uint16x4_t vld1_u16 (const uint16_t *)
    指令格式: vld1.16 {d0}, [r0]
    uint8x8_t vld1_u8 (const uint8_t *)
    指令格式: vld1.8 {d0}, [r0]
    int32x2_t vld1_s32 (const int32_t *)
    指令格式: vld1.32 {d0}, [r0]
    int16x4_t vld1_s16 (const int16_t *)
    指令格式: vld1.16 {d0}, [r0]
    int8x8_t vld1_s8 (const int8_t *)
    指令格式: vld1.8 {d0}, [r0]
    uint64x1_t vld1_u64 (const uint64_t *)
    指令格式: vld1.64 {d0}, [r0]
    int64x1_t vld1_s64 (const int64_t *)
    指令格式: vld1.64 {d0}, [r0]
    float32x2_t vld1_f32 (const float32_t *)
    指令格式: vld1.32 {d0}, [r0]
    poly16x4_t vld1_p16 (const poly16_t *)
    指令格式: vld1.16 {d0}, [r0]
    poly8x8_t vld1_p8 (const poly8_t *)
    指令格式: vld1.8 {d0}, [r0]
    uint32x4_t vld1q_u32 (const uint32_t *)
    指令格式: vld1.32 {d0, d1}, [r0]
    uint16x8_t vld1q_u16 (const uint16_t *)
    指令格式: vld1.16 {d0, d1}, [r0]
    uint8x16_t vld1q_u8 (const uint8_t *)
    指令格式: vld1.8 {d0, d1}, [r0]
    int32x4_t vld1q_s32 (const int32_t *)
    指令格式: vld1.32 {d0, d1}, [r0]
    int16x8_t vld1q_s16 (const int16_t *)
    指令格式: vld1.16 {d0, d1}, [r0]
    int8x16_t vld1q_s8 (const int8_t *)
    指令格式: vld1.8 {d0, d1}, [r0]
    uint64x2_t vld1q_u64 (const uint64_t *)
    指令格式: vld1.64 {d0, d1}, [r0]
    int64x2_t vld1q_s64 (const int64_t *)
    指令格式: vld1.64 {d0, d1}, [r0]
    float32x4_t vld1q_f32 (const float32_t *)
    指令格式: vld1.32 {d0, d1}, [r0]
    poly16x8_t vld1q_p16 (const poly16_t *)
    指令格式: vld1.16 {d0, d1}, [r0]
    poly8x16_t vld1q_p8 (const poly8_t *)
    指令格式: vld1.8 {d0, d1}, [r0]
    uint32x2_t vld1_lane_u32 (const uint32_t *, uint32x2_t, const int)
    指令格式: vld1.32 {d0[0]}, [r0]
    uint16x4_t vld1_lane_u16 (const uint16_t *, uint16x4_t, const int)
    指令格式: vld1.16 {d0[0]}, [r0]
    uint8x8_t vld1_lane_u8 (const uint8_t *, uint8x8_t, const int)
    指令格式: vld1.8 {d0[0]}, [r0]
    int32x2_t vld1_lane_s32 (const int32_t *, int32x2_t, const int)
    指令格式: vld1.32 {d0[0]}, [r0]
    int16x4_t vld1_lane_s16 (const int16_t *, int16x4_t, const int)
    指令格式: vld1.16 {d0[0]}, [r0]
    int8x8_t vld1_lane_s8 (const int8_t *, int8x8_t, const int)
    指令格式: vld1.8 {d0[0]}, [r0]
    float32x2_t vld1_lane_f32 (const float32_t *, float32x2_t, const int)
    指令格式: vld1.32 {d0[0]}, [r0]
    poly16x4_t vld1_lane_p16 (const poly16_t *, poly16x4_t, const int)
    指令格式: vld1.16 {d0[0]}, [r0]
    poly8x8_t vld1_lane_p8 (const poly8_t *, poly8x8_t, const int)
    指令格式: vld1.8 {d0[0]}, [r0]
    uint64x1_t vld1_lane_u64 (const uint64_t *, uint64x1_t, const int)
    指令格式: vld1.64 {d0}, [r0]
    int64x1_t vld1_lane_s64 (const int64_t *, int64x1_t, const int)
    指令格式: vld1.64 {d0}, [r0]
    uint32x4_t vld1q_lane_u32 (const uint32_t *, uint32x4_t, const int)
    指令格式: vld1.32 {d0[0]}, [r0]
    uint16x8_t vld1q_lane_u16 (const uint16_t *, uint16x8_t, const int)
    指令格式: vld1.16 {d0[0]}, [r0]
    uint8x16_t vld1q_lane_u8 (const uint8_t *, uint8x16_t, const int)
    指令格式: vld1.8 {d0[0]}, [r0]
    int32x4_t vld1q_lane_s32 (const int32_t *, int32x4_t, const int)
    指令格式: vld1.32 {d0[0]}, [r0]
    int16x8_t vld1q_lane_s16 (const int16_t *, int16x8_t, const int)
    指令格式: vld1.16 {d0[0]}, [r0]
    int8x16_t vld1q_lane_s8 (const int8_t *, int8x16_t, const int)
    指令格式: vld1.8 {d0[0]}, [r0]
    float32x4_t vld1q_lane_f32 (const float32_t *, float32x4_t, const int)
    指令格式: vld1.32 {d0[0]}, [r0]
    poly16x8_t vld1q_lane_p16 (const poly16_t *, poly16x8_t, const int)
    指令格式: vld1.16 {d0[0]}, [r0]
    poly8x16_t vld1q_lane_p8 (const poly8_t *, poly8x16_t, const int)
    指令格式: vld1.8 {d0[0]}, [r0]
    uint64x2_t vld1q_lane_u64 (const uint64_t *, uint64x2_t, const int)
    指令格式: vld1.64 {d0}, [r0]
    int64x2_t vld1q_lane_s64 (const int64_t *, int64x2_t, const int)
    指令格式: vld1.64 {d0}, [r0]
    uint32x2_t vld1_dup_u32 (const uint32_t *)
    指令格式: vld1.32 {d0[]}, [r0]
    uint16x4_t vld1_dup_u16 (const uint16_t *)
    指令格式: vld1.16 {d0[]}, [r0]
    uint8x8_t vld1_dup_u8 (const uint8_t *)
    指令格式: vld1.8 {d0[]}, [r0]
    int32x2_t vld1_dup_s32 (const int32_t *)
    指令格式: vld1.32 {d0[]}, [r0]
    int16x4_t vld1_dup_s16 (const int16_t *)
    指令格式: vld1.16 {d0[]}, [r0]
    int8x8_t vld1_dup_s8 (const int8_t *)
    指令格式: vld1.8 {d0[]}, [r0]
    float32x2_t vld1_dup_f32 (const float32_t *)
    指令格式: vld1.32 {d0[]}, [r0]
    poly16x4_t vld1_dup_p16 (const poly16_t *)
    指令格式: vld1.16 {d0[]}, [r0]
    poly8x8_t vld1_dup_p8 (const poly8_t *)
    指令格式: vld1.8 {d0[]}, [r0]
    uint64x1_t vld1_dup_u64 (const uint64_t *)
    指令格式: vld1.64 {d0}, [r0]
    int64x1_t vld1_dup_s64 (const int64_t *)
    指令格式: vld1.64 {d0}, [r0]
    uint32x4_t vld1q_dup_u32 (const uint32_t *)
    指令格式: vld1.32 {d0[], d1[]}, [r0]
    uint16x8_t vld1q_dup_u16 (const uint16_t *)
    指令格式: vld1.16 {d0[], d1[]}, [r0]
    uint8x16_t vld1q_dup_u8 (const uint8_t *)
    指令格式: vld1.8 {d0[], d1[]}, [r0]
    int32x4_t vld1q_dup_s32 (const int32_t *)
    指令格式: vld1.32 {d0[], d1[]}, [r0]
    int16x8_t vld1q_dup_s16 (const int16_t *)
    指令格式: vld1.16 {d0[], d1[]}, [r0]
    int8x16_t vld1q_dup_s8 (const int8_t *)
    指令格式: vld1.8 {d0[], d1[]}, [r0]
    float32x4_t vld1q_dup_f32 (const float32_t *)
    指令格式: vld1.32 {d0[], d1[]}, [r0]
    poly16x8_t vld1q_dup_p16 (const poly16_t *)
    指令格式: vld1.16 {d0[], d1[]}, [r0]
    poly8x16_t vld1q_dup_p8 (const poly8_t *)
    指令格式: vld1.8 {d0[], d1[]}, [r0]
    uint64x2_t vld1q_dup_u64 (const uint64_t *)
    指令格式: vld1.64 {d0, d1}, [r0]
    int64x2_t vld1q_dup_s64 (const int64_t *)
    指令格式: vld1.64 {d0, d1}, [r0] 

.69 Element/structure stores, VST1 variants

    void vst1_u32 (uint32_t *, uint32x2_t)
    指令格式: vst1.32 {d0}, [r0]
    void vst1_u16 (uint16_t *, uint16x4_t)
    指令格式: vst1.16 {d0}, [r0]
    void vst1_u8 (uint8_t *, uint8x8_t)
    指令格式: vst1.8 {d0}, [r0]
    void vst1_s32 (int32_t *, int32x2_t)
    指令格式: vst1.32 {d0}, [r0]
    void vst1_s16 (int16_t *, int16x4_t)
    指令格式: vst1.16 {d0}, [r0]
    void vst1_s8 (int8_t *, int8x8_t)
    指令格式: vst1.8 {d0}, [r0]
    void vst1_u64 (uint64_t *, uint64x1_t)
    指令格式: vst1.64 {d0}, [r0]
    void vst1_s64 (int64_t *, int64x1_t)
    指令格式: vst1.64 {d0}, [r0]
    void vst1_f32 (float32_t *, float32x2_t)
    指令格式: vst1.32 {d0}, [r0]
    void vst1_p16 (poly16_t *, poly16x4_t)
    指令格式: vst1.16 {d0}, [r0]
    void vst1_p8 (poly8_t *, poly8x8_t)
    指令格式: vst1.8 {d0}, [r0]
    void vst1q_u32 (uint32_t *, uint32x4_t)
    指令格式: vst1.32 {d0, d1}, [r0]
    void vst1q_u16 (uint16_t *, uint16x8_t)
    指令格式: vst1.16 {d0, d1}, [r0]
    void vst1q_u8 (uint8_t *, uint8x16_t)
    指令格式: vst1.8 {d0, d1}, [r0]
    void vst1q_s32 (int32_t *, int32x4_t)
    指令格式: vst1.32 {d0, d1}, [r0]
    void vst1q_s16 (int16_t *, int16x8_t)
    指令格式: vst1.16 {d0, d1}, [r0]
    void vst1q_s8 (int8_t *, int8x16_t)
    指令格式: vst1.8 {d0, d1}, [r0]
    void vst1q_u64 (uint64_t *, uint64x2_t)
    指令格式: vst1.64 {d0, d1}, [r0]
    void vst1q_s64 (int64_t *, int64x2_t)
    指令格式: vst1.64 {d0, d1}, [r0]
    void vst1q_f32 (float32_t *, float32x4_t)
    指令格式: vst1.32 {d0, d1}, [r0]
    void vst1q_p16 (poly16_t *, poly16x8_t)
    指令格式: vst1.16 {d0, d1}, [r0]
    void vst1q_p8 (poly8_t *, poly8x16_t)
    指令格式: vst1.8 {d0, d1}, [r0]
    void vst1_lane_u32 (uint32_t *, uint32x2_t, const int)
    指令格式: vst1.32 {d0[0]}, [r0]
    void vst1_lane_u16 (uint16_t *, uint16x4_t, const int)
    指令格式: vst1.16 {d0[0]}, [r0]
    void vst1_lane_u8 (uint8_t *, uint8x8_t, const int)
    指令格式: vst1.8 {d0[0]}, [r0]
    void vst1_lane_s32 (int32_t *, int32x2_t, const int)
    指令格式: vst1.32 {d0[0]}, [r0]
    void vst1_lane_s16 (int16_t *, int16x4_t, const int)
    指令格式: vst1.16 {d0[0]}, [r0]
    void vst1_lane_s8 (int8_t *, int8x8_t, const int)
    指令格式: vst1.8 {d0[0]}, [r0]
    void vst1_lane_f32 (float32_t *, float32x2_t, const int)
    指令格式: vst1.32 {d0[0]}, [r0]
    void vst1_lane_p16 (poly16_t *, poly16x4_t, const int)
    指令格式: vst1.16 {d0[0]}, [r0]
    void vst1_lane_p8 (poly8_t *, poly8x8_t, const int)
    指令格式: vst1.8 {d0[0]}, [r0]
    void vst1_lane_s64 (int64_t *, int64x1_t, const int)
    指令格式: vst1.64 {d0}, [r0]
    void vst1_lane_u64 (uint64_t *, uint64x1_t, const int)
    指令格式: vst1.64 {d0}, [r0]
    void vst1q_lane_u32 (uint32_t *, uint32x4_t, const int)
    指令格式: vst1.32 {d0[0]}, [r0]
    void vst1q_lane_u16 (uint16_t *, uint16x8_t, const int)
    指令格式: vst1.16 {d0[0]}, [r0]
    void vst1q_lane_u8 (uint8_t *, uint8x16_t, const int)
    指令格式: vst1.8 {d0[0]}, [r0]
    void vst1q_lane_s32 (int32_t *, int32x4_t, const int)
    指令格式: vst1.32 {d0[0]}, [r0]
    void vst1q_lane_s16 (int16_t *, int16x8_t, const int)
    指令格式: vst1.16 {d0[0]}, [r0]
    void vst1q_lane_s8 (int8_t *, int8x16_t, const int)
    指令格式: vst1.8 {d0[0]}, [r0]
    void vst1q_lane_f32 (float32_t *, float32x4_t, const int)
    指令格式: vst1.32 {d0[0]}, [r0]
    void vst1q_lane_p16 (poly16_t *, poly16x8_t, const int)
    指令格式: vst1.16 {d0[0]}, [r0]
    void vst1q_lane_p8 (poly8_t *, poly8x16_t, const int)
    指令格式: vst1.8 {d0[0]}, [r0]
    void vst1q_lane_s64 (int64_t *, int64x2_t, const int)
    指令格式: vst1.64 {d0}, [r0]
    void vst1q_lane_u64 (uint64_t *, uint64x2_t, const int)
    指令格式: vst1.64 {d0}, [r0] 

.70 Element/structure loads, VLD2 variants

    uint32x2x2_t vld2_u32 (const uint32_t *)
    指令格式: vld2.32 {d0, d1}, [r0]
    uint16x4x2_t vld2_u16 (const uint16_t *)
    指令格式: vld2.16 {d0, d1}, [r0]
    uint8x8x2_t vld2_u8 (const uint8_t *)
    指令格式: vld2.8 {d0, d1}, [r0]
    int32x2x2_t vld2_s32 (const int32_t *)
    指令格式: vld2.32 {d0, d1}, [r0]
    int16x4x2_t vld2_s16 (const int16_t *)
    指令格式: vld2.16 {d0, d1}, [r0]
    int8x8x2_t vld2_s8 (const int8_t *)
    指令格式: vld2.8 {d0, d1}, [r0]
    float32x2x2_t vld2_f32 (const float32_t *)
    指令格式: vld2.32 {d0, d1}, [r0]
    poly16x4x2_t vld2_p16 (const poly16_t *)
    指令格式: vld2.16 {d0, d1}, [r0]
    poly8x8x2_t vld2_p8 (const poly8_t *)
    指令格式: vld2.8 {d0, d1}, [r0]
    uint64x1x2_t vld2_u64 (const uint64_t *)
    指令格式: vld1.64 {d0, d1}, [r0]
    int64x1x2_t vld2_s64 (const int64_t *)
    指令格式: vld1.64 {d0, d1}, [r0]
    uint32x4x2_t vld2q_u32 (const uint32_t *)
    指令格式: vld2.32 {d0, d1}, [r0]
    uint16x8x2_t vld2q_u16 (const uint16_t *)
    指令格式: vld2.16 {d0, d1}, [r0]
    uint8x16x2_t vld2q_u8 (const uint8_t *)
    指令格式: vld2.8 {d0, d1}, [r0]
    int32x4x2_t vld2q_s32 (const int32_t *)
    指令格式: vld2.32 {d0, d1}, [r0]
    int16x8x2_t vld2q_s16 (const int16_t *)
    指令格式: vld2.16 {d0, d1}, [r0]
    int8x16x2_t vld2q_s8 (const int8_t *)
    指令格式: vld2.8 {d0, d1}, [r0]
    float32x4x2_t vld2q_f32 (const float32_t *)
    指令格式: vld2.32 {d0, d1}, [r0]
    poly16x8x2_t vld2q_p16 (const poly16_t *)
    指令格式: vld2.16 {d0, d1}, [r0]
    poly8x16x2_t vld2q_p8 (const poly8_t *)
    指令格式: vld2.8 {d0, d1}, [r0]
    uint32x2x2_t vld2_lane_u32 (const uint32_t *, uint32x2x2_t, const int)
    指令格式: vld2.32 {d0[0], d1[0]}, [r0]
    uint16x4x2_t vld2_lane_u16 (const uint16_t *, uint16x4x2_t, const int)
    指令格式: vld2.16 {d0[0], d1[0]}, [r0]
    uint8x8x2_t vld2_lane_u8 (const uint8_t *, uint8x8x2_t, const int)
    指令格式: vld2.8 {d0[0], d1[0]}, [r0]
    int32x2x2_t vld2_lane_s32 (const int32_t *, int32x2x2_t, const int)
    指令格式: vld2.32 {d0[0], d1[0]}, [r0]
    int16x4x2_t vld2_lane_s16 (const int16_t *, int16x4x2_t, const int)
    指令格式: vld2.16 {d0[0], d1[0]}, [r0]
    int8x8x2_t vld2_lane_s8 (const int8_t *, int8x8x2_t, const int)
    指令格式: vld2.8 {d0[0], d1[0]}, [r0]
    float32x2x2_t vld2_lane_f32 (const float32_t *, float32x2x2_t, const int)
    指令格式: vld2.32 {d0[0], d1[0]}, [r0]
    poly16x4x2_t vld2_lane_p16 (const poly16_t *, poly16x4x2_t, const int)
    指令格式: vld2.16 {d0[0], d1[0]}, [r0]
    poly8x8x2_t vld2_lane_p8 (const poly8_t *, poly8x8x2_t, const int)
    指令格式: vld2.8 {d0[0], d1[0]}, [r0]
    int32x4x2_t vld2q_lane_s32 (const int32_t *, int32x4x2_t, const int)
    指令格式: vld2.32 {d0[0], d1[0]}, [r0]
    int16x8x2_t vld2q_lane_s16 (const int16_t *, int16x8x2_t, const int)
    指令格式: vld2.16 {d0[0], d1[0]}, [r0]
    uint32x4x2_t vld2q_lane_u32 (const uint32_t *, uint32x4x2_t, const int)
    指令格式: vld2.32 {d0[0], d1[0]}, [r0]
    uint16x8x2_t vld2q_lane_u16 (const uint16_t *, uint16x8x2_t, const int)
    指令格式: vld2.16 {d0[0], d1[0]}, [r0]
    float32x4x2_t vld2q_lane_f32 (const float32_t *, float32x4x2_t, const int)
    指令格式: vld2.32 {d0[0], d1[0]}, [r0]
    poly16x8x2_t vld2q_lane_p16 (const poly16_t *, poly16x8x2_t, const int)
    指令格式: vld2.16 {d0[0], d1[0]}, [r0]
    uint32x2x2_t vld2_dup_u32 (const uint32_t *)
    指令格式: vld2.32 {d0[], d1[]}, [r0]
    uint16x4x2_t vld2_dup_u16 (const uint16_t *)
    指令格式: vld2.16 {d0[], d1[]}, [r0]
    uint8x8x2_t vld2_dup_u8 (const uint8_t *)
    指令格式: vld2.8 {d0[], d1[]}, [r0]
    int32x2x2_t vld2_dup_s32 (const int32_t *)
    指令格式: vld2.32 {d0[], d1[]}, [r0]
    int16x4x2_t vld2_dup_s16 (const int16_t *)
    指令格式: vld2.16 {d0[], d1[]}, [r0]
    int8x8x2_t vld2_dup_s8 (const int8_t *)
    指令格式: vld2.8 {d0[], d1[]}, [r0]
    float32x2x2_t vld2_dup_f32 (const float32_t *)
    指令格式: vld2.32 {d0[], d1[]}, [r0]
    poly16x4x2_t vld2_dup_p16 (const poly16_t *)
    指令格式: vld2.16 {d0[], d1[]}, [r0]
    poly8x8x2_t vld2_dup_p8 (const poly8_t *)
    指令格式: vld2.8 {d0[], d1[]}, [r0]
    uint64x1x2_t vld2_dup_u64 (const uint64_t *)
    指令格式: vld1.64 {d0, d1}, [r0]
    int64x1x2_t vld2_dup_s64 (const int64_t *)
    指令格式: vld1.64 {d0, d1}, [r0] 

.71 Element/structure stores, VST2 variants

    void vst2_u32 (uint32_t *, uint32x2x2_t)
    指令格式: vst2.32 {d0, d1}, [r0]
    void vst2_u16 (uint16_t *, uint16x4x2_t)
    指令格式: vst2.16 {d0, d1}, [r0]
    void vst2_u8 (uint8_t *, uint8x8x2_t)
    指令格式: vst2.8 {d0, d1}, [r0]
    void vst2_s32 (int32_t *, int32x2x2_t)
    指令格式: vst2.32 {d0, d1}, [r0]
    void vst2_s16 (int16_t *, int16x4x2_t)
    指令格式: vst2.16 {d0, d1}, [r0]
    void vst2_s8 (int8_t *, int8x8x2_t)
    指令格式: vst2.8 {d0, d1}, [r0]
    void vst2_f32 (float32_t *, float32x2x2_t)
    指令格式: vst2.32 {d0, d1}, [r0]
    void vst2_p16 (poly16_t *, poly16x4x2_t)
    指令格式: vst2.16 {d0, d1}, [r0]
    void vst2_p8 (poly8_t *, poly8x8x2_t)
    指令格式: vst2.8 {d0, d1}, [r0]
    void vst2_u64 (uint64_t *, uint64x1x2_t)
    指令格式: vst1.64 {d0, d1}, [r0]
    void vst2_s64 (int64_t *, int64x1x2_t)
    指令格式: vst1.64 {d0, d1}, [r0]
    void vst2q_u32 (uint32_t *, uint32x4x2_t)
    指令格式: vst2.32 {d0, d1}, [r0]
    void vst2q_u16 (uint16_t *, uint16x8x2_t)
    指令格式: vst2.16 {d0, d1}, [r0]
    void vst2q_u8 (uint8_t *, uint8x16x2_t)
    指令格式: vst2.8 {d0, d1}, [r0]
    void vst2q_s32 (int32_t *, int32x4x2_t)
    指令格式: vst2.32 {d0, d1}, [r0]
    void vst2q_s16 (int16_t *, int16x8x2_t)
    指令格式: vst2.16 {d0, d1}, [r0]
    void vst2q_s8 (int8_t *, int8x16x2_t)
    指令格式: vst2.8 {d0, d1}, [r0]
    void vst2q_f32 (float32_t *, float32x4x2_t)
    指令格式: vst2.32 {d0, d1}, [r0]
    void vst2q_p16 (poly16_t *, poly16x8x2_t)
    指令格式: vst2.16 {d0, d1}, [r0]
    void vst2q_p8 (poly8_t *, poly8x16x2_t)
    指令格式: vst2.8 {d0, d1}, [r0]
    void vst2_lane_u32 (uint32_t *, uint32x2x2_t, const int)
    指令格式: vst2.32 {d0[0], d1[0]}, [r0]
    void vst2_lane_u16 (uint16_t *, uint16x4x2_t, const int)
    指令格式: vst2.16 {d0[0], d1[0]}, [r0]
    void vst2_lane_u8 (uint8_t *, uint8x8x2_t, const int)
    指令格式: vst2.8 {d0[0], d1[0]}, [r0]
    void vst2_lane_s32 (int32_t *, int32x2x2_t, const int)
    指令格式: vst2.32 {d0[0], d1[0]}, [r0]
    void vst2_lane_s16 (int16_t *, int16x4x2_t, const int)
    指令格式: vst2.16 {d0[0], d1[0]}, [r0]
    void vst2_lane_s8 (int8_t *, int8x8x2_t, const int)
    指令格式: vst2.8 {d0[0], d1[0]}, [r0]
    void vst2_lane_f32 (float32_t *, float32x2x2_t, const int)
    指令格式: vst2.32 {d0[0], d1[0]}, [r0]
    void vst2_lane_p16 (poly16_t *, poly16x4x2_t, const int)
    指令格式: vst2.16 {d0[0], d1[0]}, [r0]
    void vst2_lane_p8 (poly8_t *, poly8x8x2_t, const int)
    指令格式: vst2.8 {d0[0], d1[0]}, [r0]
    void vst2q_lane_s32 (int32_t *, int32x4x2_t, const int)
    指令格式: vst2.32 {d0[0], d1[0]}, [r0]
    void vst2q_lane_s16 (int16_t *, int16x8x2_t, const int)
    指令格式: vst2.16 {d0[0], d1[0]}, [r0]
    void vst2q_lane_u32 (uint32_t *, uint32x4x2_t, const int)
    指令格式: vst2.32 {d0[0], d1[0]}, [r0]
    void vst2q_lane_u16 (uint16_t *, uint16x8x2_t, const int)
    指令格式: vst2.16 {d0[0], d1[0]}, [r0]
    void vst2q_lane_f32 (float32_t *, float32x4x2_t, const int)
    指令格式: vst2.32 {d0[0], d1[0]}, [r0]
    void vst2q_lane_p16 (poly16_t *, poly16x8x2_t, const int)
    指令格式: vst2.16 {d0[0], d1[0]}, [r0] 

.72 Element/structure loads, VLD3 variants

    uint32x2x3_t vld3_u32 (const uint32_t *)
    指令格式: vld3.32 {d0, d1, d2}, [r0]
    uint16x4x3_t vld3_u16 (const uint16_t *)
    指令格式: vld3.16 {d0, d1, d2}, [r0]
    uint8x8x3_t vld3_u8 (const uint8_t *)
    指令格式: vld3.8 {d0, d1, d2}, [r0]
    int32x2x3_t vld3_s32 (const int32_t *)
    指令格式: vld3.32 {d0, d1, d2}, [r0]
    int16x4x3_t vld3_s16 (const int16_t *)
    指令格式: vld3.16 {d0, d1, d2}, [r0]
    int8x8x3_t vld3_s8 (const int8_t *)
    指令格式: vld3.8 {d0, d1, d2}, [r0]
    float32x2x3_t vld3_f32 (const float32_t *)
    指令格式: vld3.32 {d0, d1, d2}, [r0]
    poly16x4x3_t vld3_p16 (const poly16_t *)
    指令格式: vld3.16 {d0, d1, d2}, [r0]
    poly8x8x3_t vld3_p8 (const poly8_t *)
    指令格式: vld3.8 {d0, d1, d2}, [r0]
    uint64x1x3_t vld3_u64 (const uint64_t *)
    指令格式: vld1.64 {d0, d1, d2}, [r0]
    int64x1x3_t vld3_s64 (const int64_t *)
    指令格式: vld1.64 {d0, d1, d2}, [r0]
    uint32x4x3_t vld3q_u32 (const uint32_t *)
    指令格式: vld3.32 {d0, d1, d2}, [r0]
    uint16x8x3_t vld3q_u16 (const uint16_t *)
    指令格式: vld3.16 {d0, d1, d2}, [r0]
    uint8x16x3_t vld3q_u8 (const uint8_t *)
    指令格式: vld3.8 {d0, d1, d2}, [r0]
    int32x4x3_t vld3q_s32 (const int32_t *)
    指令格式: vld3.32 {d0, d1, d2}, [r0]
    int16x8x3_t vld3q_s16 (const int16_t *)
    指令格式: vld3.16 {d0, d1, d2}, [r0]
    int8x16x3_t vld3q_s8 (const int8_t *)
    指令格式: vld3.8 {d0, d1, d2}, [r0]
    float32x4x3_t vld3q_f32 (const float32_t *)
    指令格式: vld3.32 {d0, d1, d2}, [r0]
    poly16x8x3_t vld3q_p16 (const poly16_t *)
    指令格式: vld3.16 {d0, d1, d2}, [r0]
    poly8x16x3_t vld3q_p8 (const poly8_t *)
    指令格式: vld3.8 {d0, d1, d2}, [r0]
    uint32x2x3_t vld3_lane_u32 (const uint32_t *, uint32x2x3_t, const int)
    指令格式: vld3.32 {d0[0], d1[0], d2[0]}, [r0]
    uint16x4x3_t vld3_lane_u16 (const uint16_t *, uint16x4x3_t, const int)
    指令格式: vld3.16 {d0[0], d1[0], d2[0]}, [r0]
    uint8x8x3_t vld3_lane_u8 (const uint8_t *, uint8x8x3_t, const int)
    指令格式: vld3.8 {d0[0], d1[0], d2[0]}, [r0]
    int32x2x3_t vld3_lane_s32 (const int32_t *, int32x2x3_t, const int)
    指令格式: vld3.32 {d0[0], d1[0], d2[0]}, [r0]
    int16x4x3_t vld3_lane_s16 (const int16_t *, int16x4x3_t, const int)
    指令格式: vld3.16 {d0[0], d1[0], d2[0]}, [r0]
    int8x8x3_t vld3_lane_s8 (const int8_t *, int8x8x3_t, const int)
    指令格式: vld3.8 {d0[0], d1[0], d2[0]}, [r0]
    float32x2x3_t vld3_lane_f32 (const float32_t *, float32x2x3_t, const int)
    指令格式: vld3.32 {d0[0], d1[0], d2[0]}, [r0]
    poly16x4x3_t vld3_lane_p16 (const poly16_t *, poly16x4x3_t, const int)
    指令格式: vld3.16 {d0[0], d1[0], d2[0]}, [r0]
    poly8x8x3_t vld3_lane_p8 (const poly8_t *, poly8x8x3_t, const int)
    指令格式: vld3.8 {d0[0], d1[0], d2[0]}, [r0]
    int32x4x3_t vld3q_lane_s32 (const int32_t *, int32x4x3_t, const int)
    指令格式: vld3.32 {d0[0], d1[0], d2[0]}, [r0]
    int16x8x3_t vld3q_lane_s16 (const int16_t *, int16x8x3_t, const int)
    指令格式: vld3.16 {d0[0], d1[0], d2[0]}, [r0]
    uint32x4x3_t vld3q_lane_u32 (const uint32_t *, uint32x4x3_t, const int)
    指令格式: vld3.32 {d0[0], d1[0], d2[0]}, [r0]
    uint16x8x3_t vld3q_lane_u16 (const uint16_t *, uint16x8x3_t, const int)
    指令格式: vld3.16 {d0[0], d1[0], d2[0]}, [r0]
    float32x4x3_t vld3q_lane_f32 (const float32_t *, float32x4x3_t, const int)
    指令格式: vld3.32 {d0[0], d1[0], d2[0]}, [r0]
    poly16x8x3_t vld3q_lane_p16 (const poly16_t *, poly16x8x3_t, const int)
    指令格式: vld3.16 {d0[0], d1[0], d2[0]}, [r0]
    uint32x2x3_t vld3_dup_u32 (const uint32_t *)
    指令格式: vld3.32 {d0[], d1[], d2[]}, [r0]
    uint16x4x3_t vld3_dup_u16 (const uint16_t *)
    指令格式: vld3.16 {d0[], d1[], d2[]}, [r0]
    uint8x8x3_t vld3_dup_u8 (const uint8_t *)
    指令格式: vld3.8 {d0[], d1[], d2[]}, [r0]
    int32x2x3_t vld3_dup_s32 (const int32_t *)
    指令格式: vld3.32 {d0[], d1[], d2[]}, [r0]
    int16x4x3_t vld3_dup_s16 (const int16_t *)
    指令格式: vld3.16 {d0[], d1[], d2[]}, [r0]
    int8x8x3_t vld3_dup_s8 (const int8_t *)
    指令格式: vld3.8 {d0[], d1[], d2[]}, [r0]
    float32x2x3_t vld3_dup_f32 (const float32_t *)
    指令格式: vld3.32 {d0[], d1[], d2[]}, [r0]
    poly16x4x3_t vld3_dup_p16 (const poly16_t *)
    指令格式: vld3.16 {d0[], d1[], d2[]}, [r0]
    poly8x8x3_t vld3_dup_p8 (const poly8_t *)
    指令格式: vld3.8 {d0[], d1[], d2[]}, [r0]
    uint64x1x3_t vld3_dup_u64 (const uint64_t *)
    指令格式: vld1.64 {d0, d1, d2}, [r0]
    int64x1x3_t vld3_dup_s64 (const int64_t *)
    指令格式: vld1.64 {d0, d1, d2}, [r0] 

.73 Element/structure stores, VST3 variants

    void vst3_u32 (uint32_t *, uint32x2x3_t)
    指令格式: vst3.32 {d0, d1, d2, d3}, [r0]
    void vst3_u16 (uint16_t *, uint16x4x3_t)
    指令格式: vst3.16 {d0, d1, d2, d3}, [r0]
    void vst3_u8 (uint8_t *, uint8x8x3_t)
    指令格式: vst3.8 {d0, d1, d2, d3}, [r0]
    void vst3_s32 (int32_t *, int32x2x3_t)
    指令格式: vst3.32 {d0, d1, d2, d3}, [r0]
    void vst3_s16 (int16_t *, int16x4x3_t)
    指令格式: vst3.16 {d0, d1, d2, d3}, [r0]
    void vst3_s8 (int8_t *, int8x8x3_t)
    指令格式: vst3.8 {d0, d1, d2, d3}, [r0]
    void vst3_f32 (float32_t *, float32x2x3_t)
    指令格式: vst3.32 {d0, d1, d2, d3}, [r0]
    void vst3_p16 (poly16_t *, poly16x4x3_t)
    指令格式: vst3.16 {d0, d1, d2, d3}, [r0]
    void vst3_p8 (poly8_t *, poly8x8x3_t)
    指令格式: vst3.8 {d0, d1, d2, d3}, [r0]
    void vst3_u64 (uint64_t *, uint64x1x3_t)
    指令格式: vst1.64 {d0, d1, d2, d3}, [r0]
    void vst3_s64 (int64_t *, int64x1x3_t)
    指令格式: vst1.64 {d0, d1, d2, d3}, [r0]
    void vst3q_u32 (uint32_t *, uint32x4x3_t)
    指令格式: vst3.32 {d0, d1, d2}, [r0]
    void vst3q_u16 (uint16_t *, uint16x8x3_t)
    指令格式: vst3.16 {d0, d1, d2}, [r0]
    void vst3q_u8 (uint8_t *, uint8x16x3_t)
    指令格式: vst3.8 {d0, d1, d2}, [r0]
    void vst3q_s32 (int32_t *, int32x4x3_t)
    指令格式: vst3.32 {d0, d1, d2}, [r0]
    void vst3q_s16 (int16_t *, int16x8x3_t)
    指令格式: vst3.16 {d0, d1, d2}, [r0]
    void vst3q_s8 (int8_t *, int8x16x3_t)
    指令格式: vst3.8 {d0, d1, d2}, [r0]
    void vst3q_f32 (float32_t *, float32x4x3_t)
    指令格式: vst3.32 {d0, d1, d2}, [r0]
    void vst3q_p16 (poly16_t *, poly16x8x3_t)
    指令格式: vst3.16 {d0, d1, d2}, [r0]
    void vst3q_p8 (poly8_t *, poly8x16x3_t)
    指令格式: vst3.8 {d0, d1, d2}, [r0]
    void vst3_lane_u32 (uint32_t *, uint32x2x3_t, const int)
    指令格式: vst3.32 {d0[0], d1[0], d2[0]}, [r0]
    void vst3_lane_u16 (uint16_t *, uint16x4x3_t, const int)
    指令格式: vst3.16 {d0[0], d1[0], d2[0]}, [r0]
    void vst3_lane_u8 (uint8_t *, uint8x8x3_t, const int)
    指令格式: vst3.8 {d0[0], d1[0], d2[0]}, [r0]
    void vst3_lane_s32 (int32_t *, int32x2x3_t, const int)
    指令格式: vst3.32 {d0[0], d1[0], d2[0]}, [r0]
    void vst3_lane_s16 (int16_t *, int16x4x3_t, const int)
    指令格式: vst3.16 {d0[0], d1[0], d2[0]}, [r0]
    void vst3_lane_s8 (int8_t *, int8x8x3_t, const int)
    指令格式: vst3.8 {d0[0], d1[0], d2[0]}, [r0]
    void vst3_lane_f32 (float32_t *, float32x2x3_t, const int)
    指令格式: vst3.32 {d0[0], d1[0], d2[0]}, [r0]
    void vst3_lane_p16 (poly16_t *, poly16x4x3_t, const int)
    指令格式: vst3.16 {d0[0], d1[0], d2[0]}, [r0]
    void vst3_lane_p8 (poly8_t *, poly8x8x3_t, const int)
    指令格式: vst3.8 {d0[0], d1[0], d2[0]}, [r0]
    void vst3q_lane_s32 (int32_t *, int32x4x3_t, const int)
    指令格式: vst3.32 {d0[0], d1[0], d2[0]}, [r0]
    void vst3q_lane_s16 (int16_t *, int16x8x3_t, const int)
    指令格式: vst3.16 {d0[0], d1[0], d2[0]}, [r0]
    void vst3q_lane_u32 (uint32_t *, uint32x4x3_t, const int)
    指令格式: vst3.32 {d0[0], d1[0], d2[0]}, [r0]
    void vst3q_lane_u16 (uint16_t *, uint16x8x3_t, const int)
    指令格式: vst3.16 {d0[0], d1[0], d2[0]}, [r0]
    void vst3q_lane_f32 (float32_t *, float32x4x3_t, const int)
    指令格式: vst3.32 {d0[0], d1[0], d2[0]}, [r0]
    void vst3q_lane_p16 (poly16_t *, poly16x8x3_t, const int)
    指令格式: vst3.16 {d0[0], d1[0], d2[0]}, [r0] 

.74 Element/structure loads, VLD4 variants

    uint32x2x4_t vld4_u32 (const uint32_t *)
    指令格式: vld4.32 {d0, d1, d2, d3}, [r0]
    uint16x4x4_t vld4_u16 (const uint16_t *)
    指令格式: vld4.16 {d0, d1, d2, d3}, [r0]
    uint8x8x4_t vld4_u8 (const uint8_t *)
    指令格式: vld4.8 {d0, d1, d2, d3}, [r0]
    int32x2x4_t vld4_s32 (const int32_t *)
    指令格式: vld4.32 {d0, d1, d2, d3}, [r0]
    int16x4x4_t vld4_s16 (const int16_t *)
    指令格式: vld4.16 {d0, d1, d2, d3}, [r0]
    int8x8x4_t vld4_s8 (const int8_t *)
    指令格式: vld4.8 {d0, d1, d2, d3}, [r0]
    float32x2x4_t vld4_f32 (const float32_t *)
    指令格式: vld4.32 {d0, d1, d2, d3}, [r0]
    poly16x4x4_t vld4_p16 (const poly16_t *)
    指令格式: vld4.16 {d0, d1, d2, d3}, [r0]
    poly8x8x4_t vld4_p8 (const poly8_t *)
    指令格式: vld4.8 {d0, d1, d2, d3}, [r0]
    uint64x1x4_t vld4_u64 (const uint64_t *)
    指令格式: vld1.64 {d0, d1, d2, d3}, [r0]
    int64x1x4_t vld4_s64 (const int64_t *)
    指令格式: vld1.64 {d0, d1, d2, d3}, [r0]
    uint32x4x4_t vld4q_u32 (const uint32_t *)
    指令格式: vld4.32 {d0, d1, d2, d3}, [r0]
    uint16x8x4_t vld4q_u16 (const uint16_t *)
    指令格式: vld4.16 {d0, d1, d2, d3}, [r0]
    uint8x16x4_t vld4q_u8 (const uint8_t *)
    指令格式: vld4.8 {d0, d1, d2, d3}, [r0]
    int32x4x4_t vld4q_s32 (const int32_t *)
    指令格式: vld4.32 {d0, d1, d2, d3}, [r0]
    int16x8x4_t vld4q_s16 (const int16_t *)
    指令格式: vld4.16 {d0, d1, d2, d3}, [r0]
    int8x16x4_t vld4q_s8 (const int8_t *)
    指令格式: vld4.8 {d0, d1, d2, d3}, [r0]
    float32x4x4_t vld4q_f32 (const float32_t *)
    指令格式: vld4.32 {d0, d1, d2, d3}, [r0]
    poly16x8x4_t vld4q_p16 (const poly16_t *)
    指令格式: vld4.16 {d0, d1, d2, d3}, [r0]
    poly8x16x4_t vld4q_p8 (const poly8_t *)
    指令格式: vld4.8 {d0, d1, d2, d3}, [r0]
    uint32x2x4_t vld4_lane_u32 (const uint32_t *, uint32x2x4_t, const int)
    指令格式: vld4.32 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    uint16x4x4_t vld4_lane_u16 (const uint16_t *, uint16x4x4_t, const int)
    指令格式: vld4.16 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    uint8x8x4_t vld4_lane_u8 (const uint8_t *, uint8x8x4_t, const int)
    指令格式: vld4.8 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    int32x2x4_t vld4_lane_s32 (const int32_t *, int32x2x4_t, const int)
    指令格式: vld4.32 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    int16x4x4_t vld4_lane_s16 (const int16_t *, int16x4x4_t, const int)
    指令格式: vld4.16 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    int8x8x4_t vld4_lane_s8 (const int8_t *, int8x8x4_t, const int)
    指令格式: vld4.8 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    float32x2x4_t vld4_lane_f32 (const float32_t *, float32x2x4_t, const int)
    指令格式: vld4.32 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    poly16x4x4_t vld4_lane_p16 (const poly16_t *, poly16x4x4_t, const int)
    指令格式: vld4.16 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    poly8x8x4_t vld4_lane_p8 (const poly8_t *, poly8x8x4_t, const int)
    指令格式: vld4.8 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    int32x4x4_t vld4q_lane_s32 (const int32_t *, int32x4x4_t, const int)
    指令格式: vld4.32 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    int16x8x4_t vld4q_lane_s16 (const int16_t *, int16x8x4_t, const int)
    指令格式: vld4.16 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    uint32x4x4_t vld4q_lane_u32 (const uint32_t *, uint32x4x4_t, const int)
    指令格式: vld4.32 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    uint16x8x4_t vld4q_lane_u16 (const uint16_t *, uint16x8x4_t, const int)
    指令格式: vld4.16 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    float32x4x4_t vld4q_lane_f32 (const float32_t *, float32x4x4_t, const int)
    指令格式: vld4.32 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    poly16x8x4_t vld4q_lane_p16 (const poly16_t *, poly16x8x4_t, const int)
    指令格式: vld4.16 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    uint32x2x4_t vld4_dup_u32 (const uint32_t *)
    指令格式: vld4.32 {d0[], d1[], d2[], d3[]}, [r0]
    uint16x4x4_t vld4_dup_u16 (const uint16_t *)
    指令格式: vld4.16 {d0[], d1[], d2[], d3[]}, [r0]
    uint8x8x4_t vld4_dup_u8 (const uint8_t *)
    指令格式: vld4.8 {d0[], d1[], d2[], d3[]}, [r0]
    int32x2x4_t vld4_dup_s32 (const int32_t *)
    指令格式: vld4.32 {d0[], d1[], d2[], d3[]}, [r0]
    int16x4x4_t vld4_dup_s16 (const int16_t *)
    指令格式: vld4.16 {d0[], d1[], d2[], d3[]}, [r0]
    int8x8x4_t vld4_dup_s8 (const int8_t *)
    指令格式: vld4.8 {d0[], d1[], d2[], d3[]}, [r0]
    float32x2x4_t vld4_dup_f32 (const float32_t *)
    指令格式: vld4.32 {d0[], d1[], d2[], d3[]}, [r0]
    poly16x4x4_t vld4_dup_p16 (const poly16_t *)
    指令格式: vld4.16 {d0[], d1[], d2[], d3[]}, [r0]
    poly8x8x4_t vld4_dup_p8 (const poly8_t *)
    指令格式: vld4.8 {d0[], d1[], d2[], d3[]}, [r0]
    uint64x1x4_t vld4_dup_u64 (const uint64_t *)
    指令格式: vld1.64 {d0, d1, d2, d3}, [r0]
    int64x1x4_t vld4_dup_s64 (const int64_t *)
    指令格式: vld1.64 {d0, d1, d2, d3}, [r0] 

.75 Element/structure stores, VST4 variants

    void vst4_u32 (uint32_t *, uint32x2x4_t)
    指令格式: vst4.32 {d0, d1, d2, d3}, [r0]
    void vst4_u16 (uint16_t *, uint16x4x4_t)
    指令格式: vst4.16 {d0, d1, d2, d3}, [r0]
    void vst4_u8 (uint8_t *, uint8x8x4_t)
    指令格式: vst4.8 {d0, d1, d2, d3}, [r0]
    void vst4_s32 (int32_t *, int32x2x4_t)
    指令格式: vst4.32 {d0, d1, d2, d3}, [r0]
    void vst4_s16 (int16_t *, int16x4x4_t)
    指令格式: vst4.16 {d0, d1, d2, d3}, [r0]
    void vst4_s8 (int8_t *, int8x8x4_t)
    指令格式: vst4.8 {d0, d1, d2, d3}, [r0]
    void vst4_f32 (float32_t *, float32x2x4_t)
    指令格式: vst4.32 {d0, d1, d2, d3}, [r0]
    void vst4_p16 (poly16_t *, poly16x4x4_t)
    指令格式: vst4.16 {d0, d1, d2, d3}, [r0]
    void vst4_p8 (poly8_t *, poly8x8x4_t)
    指令格式: vst4.8 {d0, d1, d2, d3}, [r0]
    void vst4_u64 (uint64_t *, uint64x1x4_t)
    指令格式: vst1.64 {d0, d1, d2, d3}, [r0]
    void vst4_s64 (int64_t *, int64x1x4_t)
    指令格式: vst1.64 {d0, d1, d2, d3}, [r0]
    void vst4q_u32 (uint32_t *, uint32x4x4_t)
    指令格式: vst4.32 {d0, d1, d2, d3}, [r0]
    void vst4q_u16 (uint16_t *, uint16x8x4_t)
    指令格式: vst4.16 {d0, d1, d2, d3}, [r0]
    void vst4q_u8 (uint8_t *, uint8x16x4_t)
    指令格式: vst4.8 {d0, d1, d2, d3}, [r0]
    void vst4q_s32 (int32_t *, int32x4x4_t)
    指令格式: vst4.32 {d0, d1, d2, d3}, [r0]
    void vst4q_s16 (int16_t *, int16x8x4_t)
    指令格式: vst4.16 {d0, d1, d2, d3}, [r0]
    void vst4q_s8 (int8_t *, int8x16x4_t)
    指令格式: vst4.8 {d0, d1, d2, d3}, [r0]
    void vst4q_f32 (float32_t *, float32x4x4_t)
    指令格式: vst4.32 {d0, d1, d2, d3}, [r0]
    void vst4q_p16 (poly16_t *, poly16x8x4_t)
    指令格式: vst4.16 {d0, d1, d2, d3}, [r0]
    void vst4q_p8 (poly8_t *, poly8x16x4_t)
    指令格式: vst4.8 {d0, d1, d2, d3}, [r0]
    void vst4_lane_u32 (uint32_t *, uint32x2x4_t, const int)
    指令格式: vst4.32 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    void vst4_lane_u16 (uint16_t *, uint16x4x4_t, const int)
    指令格式: vst4.16 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    void vst4_lane_u8 (uint8_t *, uint8x8x4_t, const int)
    指令格式: vst4.8 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    void vst4_lane_s32 (int32_t *, int32x2x4_t, const int)
    指令格式: vst4.32 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    void vst4_lane_s16 (int16_t *, int16x4x4_t, const int)
    指令格式: vst4.16 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    void vst4_lane_s8 (int8_t *, int8x8x4_t, const int)
    指令格式: vst4.8 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    void vst4_lane_f32 (float32_t *, float32x2x4_t, const int)
    指令格式: vst4.32 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    void vst4_lane_p16 (poly16_t *, poly16x4x4_t, const int)
    指令格式: vst4.16 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    void vst4_lane_p8 (poly8_t *, poly8x8x4_t, const int)
    指令格式: vst4.8 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    void vst4q_lane_s32 (int32_t *, int32x4x4_t, const int)
    指令格式: vst4.32 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    void vst4q_lane_s16 (int16_t *, int16x8x4_t, const int)
    指令格式: vst4.16 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    void vst4q_lane_u32 (uint32_t *, uint32x4x4_t, const int)
    指令格式: vst4.32 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    void vst4q_lane_u16 (uint16_t *, uint16x8x4_t, const int)
    指令格式: vst4.16 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    void vst4q_lane_f32 (float32_t *, float32x4x4_t, const int)
    指令格式: vst4.32 {d0[0], d1[0], d2[0], d3[0]}, [r0]
    void vst4q_lane_p16 (poly16_t *, poly16x8x4_t, const int)
    指令格式: vst4.16 {d0[0], d1[0], d2[0], d3[0]}, [r0] 

.76 Logical operations (AND)

    uint32x2_t vand_u32 (uint32x2_t, uint32x2_t)
    指令格式: vand d0, d0, d0
    uint16x4_t vand_u16 (uint16x4_t, uint16x4_t)
    指令格式: vand d0, d0, d0
    uint8x8_t vand_u8 (uint8x8_t, uint8x8_t)
    指令格式: vand d0, d0, d0
    int32x2_t vand_s32 (int32x2_t, int32x2_t)
    指令格式: vand d0, d0, d0
    int16x4_t vand_s16 (int16x4_t, int16x4_t)
    指令格式: vand d0, d0, d0
    int8x8_t vand_s8 (int8x8_t, int8x8_t)
    指令格式: vand d0, d0, d0
    uint64x1_t vand_u64 (uint64x1_t, uint64x1_t)
    int64x1_t vand_s64 (int64x1_t, int64x1_t)
    uint32x4_t vandq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vand q0, q0, q0
    uint16x8_t vandq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vand q0, q0, q0
    uint8x16_t vandq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vand q0, q0, q0
    int32x4_t vandq_s32 (int32x4_t, int32x4_t)
    指令格式: vand q0, q0, q0
    int16x8_t vandq_s16 (int16x8_t, int16x8_t)
    指令格式: vand q0, q0, q0
    int8x16_t vandq_s8 (int8x16_t, int8x16_t)
    指令格式: vand q0, q0, q0
    uint64x2_t vandq_u64 (uint64x2_t, uint64x2_t)
    指令格式: vand q0, q0, q0
    int64x2_t vandq_s64 (int64x2_t, int64x2_t)
    指令格式: vand q0, q0, q0 

.77 Logical operations (OR)

    uint32x2_t vorr_u32 (uint32x2_t, uint32x2_t)
    指令格式: vorr d0, d0, d0
    uint16x4_t vorr_u16 (uint16x4_t, uint16x4_t)
    指令格式: vorr d0, d0, d0
    uint8x8_t vorr_u8 (uint8x8_t, uint8x8_t)
    指令格式: vorr d0, d0, d0
    int32x2_t vorr_s32 (int32x2_t, int32x2_t)
    指令格式: vorr d0, d0, d0
    int16x4_t vorr_s16 (int16x4_t, int16x4_t)
    指令格式: vorr d0, d0, d0
    int8x8_t vorr_s8 (int8x8_t, int8x8_t)
    指令格式: vorr d0, d0, d0
    uint64x1_t vorr_u64 (uint64x1_t, uint64x1_t)
    int64x1_t vorr_s64 (int64x1_t, int64x1_t)
    uint32x4_t vorrq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vorr q0, q0, q0
    uint16x8_t vorrq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vorr q0, q0, q0
    uint8x16_t vorrq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vorr q0, q0, q0
    int32x4_t vorrq_s32 (int32x4_t, int32x4_t)
    指令格式: vorr q0, q0, q0
    int16x8_t vorrq_s16 (int16x8_t, int16x8_t)
    指令格式: vorr q0, q0, q0
    int8x16_t vorrq_s8 (int8x16_t, int8x16_t)
    指令格式: vorr q0, q0, q0
    uint64x2_t vorrq_u64 (uint64x2_t, uint64x2_t)
    指令格式: vorr q0, q0, q0
    int64x2_t vorrq_s64 (int64x2_t, int64x2_t)
    指令格式: vorr q0, q0, q0 

.78 Logical operations (exclusive OR)

    uint32x2_t veor_u32 (uint32x2_t, uint32x2_t)
    指令格式: veor d0, d0, d0
    uint16x4_t veor_u16 (uint16x4_t, uint16x4_t)
    指令格式: veor d0, d0, d0
    uint8x8_t veor_u8 (uint8x8_t, uint8x8_t)
    指令格式: veor d0, d0, d0
    int32x2_t veor_s32 (int32x2_t, int32x2_t)
    指令格式: veor d0, d0, d0
    int16x4_t veor_s16 (int16x4_t, int16x4_t)
    指令格式: veor d0, d0, d0
    int8x8_t veor_s8 (int8x8_t, int8x8_t)
    指令格式: veor d0, d0, d0
    uint64x1_t veor_u64 (uint64x1_t, uint64x1_t)
    int64x1_t veor_s64 (int64x1_t, int64x1_t)
    uint32x4_t veorq_u32 (uint32x4_t, uint32x4_t)
    指令格式: veor q0, q0, q0
    uint16x8_t veorq_u16 (uint16x8_t, uint16x8_t)
    指令格式: veor q0, q0, q0
    uint8x16_t veorq_u8 (uint8x16_t, uint8x16_t)
    指令格式: veor q0, q0, q0
    int32x4_t veorq_s32 (int32x4_t, int32x4_t)
    指令格式: veor q0, q0, q0
    int16x8_t veorq_s16 (int16x8_t, int16x8_t)
    指令格式: veor q0, q0, q0
    int8x16_t veorq_s8 (int8x16_t, int8x16_t)
    指令格式: veor q0, q0, q0
    uint64x2_t veorq_u64 (uint64x2_t, uint64x2_t)
    指令格式: veor q0, q0, q0
    int64x2_t veorq_s64 (int64x2_t, int64x2_t)
    指令格式: veor q0, q0, q0 

.79 Logical operations (AND-NOT)

    uint32x2_t vbic_u32 (uint32x2_t, uint32x2_t)
    指令格式: vbic d0, d0, d0
    uint16x4_t vbic_u16 (uint16x4_t, uint16x4_t)
    指令格式: vbic d0, d0, d0
    uint8x8_t vbic_u8 (uint8x8_t, uint8x8_t)
    指令格式: vbic d0, d0, d0
    int32x2_t vbic_s32 (int32x2_t, int32x2_t)
    指令格式: vbic d0, d0, d0
    int16x4_t vbic_s16 (int16x4_t, int16x4_t)
    指令格式: vbic d0, d0, d0
    int8x8_t vbic_s8 (int8x8_t, int8x8_t)
    指令格式: vbic d0, d0, d0
    uint64x1_t vbic_u64 (uint64x1_t, uint64x1_t)
    int64x1_t vbic_s64 (int64x1_t, int64x1_t)
    uint32x4_t vbicq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vbic q0, q0, q0
    uint16x8_t vbicq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vbic q0, q0, q0
    uint8x16_t vbicq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vbic q0, q0, q0
    int32x4_t vbicq_s32 (int32x4_t, int32x4_t)
    指令格式: vbic q0, q0, q0
    int16x8_t vbicq_s16 (int16x8_t, int16x8_t)
    指令格式: vbic q0, q0, q0
    int8x16_t vbicq_s8 (int8x16_t, int8x16_t)
    指令格式: vbic q0, q0, q0
    uint64x2_t vbicq_u64 (uint64x2_t, uint64x2_t)
    指令格式: vbic q0, q0, q0
    int64x2_t vbicq_s64 (int64x2_t, int64x2_t)
    指令格式: vbic q0, q0, q0 

.80 Logical operations (OR-NOT)

    uint32x2_t vorn_u32 (uint32x2_t, uint32x2_t)
    指令格式: vorn d0, d0, d0
    uint16x4_t vorn_u16 (uint16x4_t, uint16x4_t)
    指令格式: vorn d0, d0, d0
    uint8x8_t vorn_u8 (uint8x8_t, uint8x8_t)
    指令格式: vorn d0, d0, d0
    int32x2_t vorn_s32 (int32x2_t, int32x2_t)
    指令格式: vorn d0, d0, d0
    int16x4_t vorn_s16 (int16x4_t, int16x4_t)
    指令格式: vorn d0, d0, d0
    int8x8_t vorn_s8 (int8x8_t, int8x8_t)
    指令格式: vorn d0, d0, d0
    uint64x1_t vorn_u64 (uint64x1_t, uint64x1_t)
    int64x1_t vorn_s64 (int64x1_t, int64x1_t)
    uint32x4_t vornq_u32 (uint32x4_t, uint32x4_t)
    指令格式: vorn q0, q0, q0
    uint16x8_t vornq_u16 (uint16x8_t, uint16x8_t)
    指令格式: vorn q0, q0, q0
    uint8x16_t vornq_u8 (uint8x16_t, uint8x16_t)
    指令格式: vorn q0, q0, q0
    int32x4_t vornq_s32 (int32x4_t, int32x4_t)
    指令格式: vorn q0, q0, q0
    int16x8_t vornq_s16 (int16x8_t, int16x8_t)
    指令格式: vorn q0, q0, q0
    int8x16_t vornq_s8 (int8x16_t, int8x16_t)
    指令格式: vorn q0, q0, q0
    uint64x2_t vornq_u64 (uint64x2_t, uint64x2_t)
    指令格式: vorn q0, q0, q0
    int64x2_t vornq_s64 (int64x2_t, int64x2_t)
    指令格式: vorn q0, q0, q0 

.81 Reinterpret casts

    poly8x8_t vreinterpret_p8_u32 (uint32x2_t)
    poly8x8_t vreinterpret_p8_u16 (uint16x4_t)
    poly8x8_t vreinterpret_p8_u8 (uint8x8_t)
    poly8x8_t vreinterpret_p8_s32 (int32x2_t)
    poly8x8_t vreinterpret_p8_s16 (int16x4_t)
    poly8x8_t vreinterpret_p8_s8 (int8x8_t)
    poly8x8_t vreinterpret_p8_u64 (uint64x1_t)
    poly8x8_t vreinterpret_p8_s64 (int64x1_t)
    poly8x8_t vreinterpret_p8_f32 (float32x2_t)
    poly8x8_t vreinterpret_p8_p16 (poly16x4_t)
    poly8x16_t vreinterpretq_p8_u32 (uint32x4_t)
    poly8x16_t vreinterpretq_p8_u16 (uint16x8_t)
    poly8x16_t vreinterpretq_p8_u8 (uint8x16_t)
    poly8x16_t vreinterpretq_p8_s32 (int32x4_t)
    poly8x16_t vreinterpretq_p8_s16 (int16x8_t)
    poly8x16_t vreinterpretq_p8_s8 (int8x16_t)
    poly8x16_t vreinterpretq_p8_u64 (uint64x2_t)
    poly8x16_t vreinterpretq_p8_s64 (int64x2_t)
    poly8x16_t vreinterpretq_p8_f32 (float32x4_t)
    poly8x16_t vreinterpretq_p8_p16 (poly16x8_t)
    poly16x4_t vreinterpret_p16_u32 (uint32x2_t)
    poly16x4_t vreinterpret_p16_u16 (uint16x4_t)
    poly16x4_t vreinterpret_p16_u8 (uint8x8_t)
    poly16x4_t vreinterpret_p16_s32 (int32x2_t)
    poly16x4_t vreinterpret_p16_s16 (int16x4_t)
    poly16x4_t vreinterpret_p16_s8 (int8x8_t)
    poly16x4_t vreinterpret_p16_u64 (uint64x1_t)
    poly16x4_t vreinterpret_p16_s64 (int64x1_t)
    poly16x4_t vreinterpret_p16_f32 (float32x2_t)
    poly16x4_t vreinterpret_p16_p8 (poly8x8_t)
    poly16x8_t vreinterpretq_p16_u32 (uint32x4_t)
    poly16x8_t vreinterpretq_p16_u16 (uint16x8_t)
    poly16x8_t vreinterpretq_p16_u8 (uint8x16_t)
    poly16x8_t vreinterpretq_p16_s32 (int32x4_t)
    poly16x8_t vreinterpretq_p16_s16 (int16x8_t)
    poly16x8_t vreinterpretq_p16_s8 (int8x16_t)
    poly16x8_t vreinterpretq_p16_u64 (uint64x2_t)
    poly16x8_t vreinterpretq_p16_s64 (int64x2_t)
    poly16x8_t vreinterpretq_p16_f32 (float32x4_t)
    poly16x8_t vreinterpretq_p16_p8 (poly8x16_t)
    float32x2_t vreinterpret_f32_u32 (uint32x2_t)
    float32x2_t vreinterpret_f32_u16 (uint16x4_t)
    float32x2_t vreinterpret_f32_u8 (uint8x8_t)
    float32x2_t vreinterpret_f32_s32 (int32x2_t)
    float32x2_t vreinterpret_f32_s16 (int16x4_t)
    float32x2_t vreinterpret_f32_s8 (int8x8_t)
    float32x2_t vreinterpret_f32_u64 (uint64x1_t)
    float32x2_t vreinterpret_f32_s64 (int64x1_t)
    float32x2_t vreinterpret_f32_p16 (poly16x4_t)
    float32x2_t vreinterpret_f32_p8 (poly8x8_t)
    float32x4_t vreinterpretq_f32_u32 (uint32x4_t)
    float32x4_t vreinterpretq_f32_u16 (uint16x8_t)
    float32x4_t vreinterpretq_f32_u8 (uint8x16_t)
    float32x4_t vreinterpretq_f32_s32 (int32x4_t)
    float32x4_t vreinterpretq_f32_s16 (int16x8_t)
    float32x4_t vreinterpretq_f32_s8 (int8x16_t)
    float32x4_t vreinterpretq_f32_u64 (uint64x2_t)
    float32x4_t vreinterpretq_f32_s64 (int64x2_t)
    float32x4_t vreinterpretq_f32_p16 (poly16x8_t)
    float32x4_t vreinterpretq_f32_p8 (poly8x16_t)
    int64x1_t vreinterpret_s64_u32 (uint32x2_t)
    int64x1_t vreinterpret_s64_u16 (uint16x4_t)
    int64x1_t vreinterpret_s64_u8 (uint8x8_t)
    int64x1_t vreinterpret_s64_s32 (int32x2_t)
    int64x1_t vreinterpret_s64_s16 (int16x4_t)
    int64x1_t vreinterpret_s64_s8 (int8x8_t)
    int64x1_t vreinterpret_s64_u64 (uint64x1_t)
    int64x1_t vreinterpret_s64_f32 (float32x2_t)
    int64x1_t vreinterpret_s64_p16 (poly16x4_t)
    int64x1_t vreinterpret_s64_p8 (poly8x8_t)
    int64x2_t vreinterpretq_s64_u32 (uint32x4_t)
    int64x2_t vreinterpretq_s64_u16 (uint16x8_t)
    int64x2_t vreinterpretq_s64_u8 (uint8x16_t)
    int64x2_t vreinterpretq_s64_s32 (int32x4_t)
    int64x2_t vreinterpretq_s64_s16 (int16x8_t)
    int64x2_t vreinterpretq_s64_s8 (int8x16_t)
    int64x2_t vreinterpretq_s64_u64 (uint64x2_t)
    int64x2_t vreinterpretq_s64_f32 (float32x4_t)
    int64x2_t vreinterpretq_s64_p16 (poly16x8_t)
    int64x2_t vreinterpretq_s64_p8 (poly8x16_t)
    uint64x1_t vreinterpret_u64_u32 (uint32x2_t)
    uint64x1_t vreinterpret_u64_u16 (uint16x4_t)
    uint64x1_t vreinterpret_u64_u8 (uint8x8_t)
    uint64x1_t vreinterpret_u64_s32 (int32x2_t)
    uint64x1_t vreinterpret_u64_s16 (int16x4_t)
    uint64x1_t vreinterpret_u64_s8 (int8x8_t)
    uint64x1_t vreinterpret_u64_s64 (int64x1_t)
    uint64x1_t vreinterpret_u64_f32 (float32x2_t)
    uint64x1_t vreinterpret_u64_p16 (poly16x4_t)
    uint64x1_t vreinterpret_u64_p8 (poly8x8_t)
    uint64x2_t vreinterpretq_u64_u32 (uint32x4_t)
    uint64x2_t vreinterpretq_u64_u16 (uint16x8_t)
    uint64x2_t vreinterpretq_u64_u8 (uint8x16_t)
    uint64x2_t vreinterpretq_u64_s32 (int32x4_t)
    uint64x2_t vreinterpretq_u64_s16 (int16x8_t)
    uint64x2_t vreinterpretq_u64_s8 (int8x16_t)
    uint64x2_t vreinterpretq_u64_s64 (int64x2_t)
    uint64x2_t vreinterpretq_u64_f32 (float32x4_t)
    uint64x2_t vreinterpretq_u64_p16 (poly16x8_t)
    uint64x2_t vreinterpretq_u64_p8 (poly8x16_t)
    int8x8_t vreinterpret_s8_u32 (uint32x2_t)
    int8x8_t vreinterpret_s8_u16 (uint16x4_t)
    int8x8_t vreinterpret_s8_u8 (uint8x8_t)
    int8x8_t vreinterpret_s8_s32 (int32x2_t)
    int8x8_t vreinterpret_s8_s16 (int16x4_t)
    int8x8_t vreinterpret_s8_u64 (uint64x1_t)
    int8x8_t vreinterpret_s8_s64 (int64x1_t)
    int8x8_t vreinterpret_s8_f32 (float32x2_t)
    int8x8_t vreinterpret_s8_p16 (poly16x4_t)
    int8x8_t vreinterpret_s8_p8 (poly8x8_t)
    int8x16_t vreinterpretq_s8_u32 (uint32x4_t)
    int8x16_t vreinterpretq_s8_u16 (uint16x8_t)
    int8x16_t vreinterpretq_s8_u8 (uint8x16_t)
    int8x16_t vreinterpretq_s8_s32 (int32x4_t)
    int8x16_t vreinterpretq_s8_s16 (int16x8_t)
    int8x16_t vreinterpretq_s8_u64 (uint64x2_t)
    int8x16_t vreinterpretq_s8_s64 (int64x2_t)
    int8x16_t vreinterpretq_s8_f32 (float32x4_t)
    int8x16_t vreinterpretq_s8_p16 (poly16x8_t)
    int8x16_t vreinterpretq_s8_p8 (poly8x16_t)
    int16x4_t vreinterpret_s16_u32 (uint32x2_t)
    int16x4_t vreinterpret_s16_u16 (uint16x4_t)
    int16x4_t vreinterpret_s16_u8 (uint8x8_t)
    int16x4_t vreinterpret_s16_s32 (int32x2_t)
    int16x4_t vreinterpret_s16_s8 (int8x8_t)
    int16x4_t vreinterpret_s16_u64 (uint64x1_t)
    int16x4_t vreinterpret_s16_s64 (int64x1_t)
    int16x4_t vreinterpret_s16_f32 (float32x2_t)
    int16x4_t vreinterpret_s16_p16 (poly16x4_t)
    int16x4_t vreinterpret_s16_p8 (poly8x8_t)
    int16x8_t vreinterpretq_s16_u32 (uint32x4_t)
    int16x8_t vreinterpretq_s16_u16 (uint16x8_t)
    int16x8_t vreinterpretq_s16_u8 (uint8x16_t)
    int16x8_t vreinterpretq_s16_s32 (int32x4_t)
    int16x8_t vreinterpretq_s16_s8 (int8x16_t)
    int16x8_t vreinterpretq_s16_u64 (uint64x2_t)
    int16x8_t vreinterpretq_s16_s64 (int64x2_t)
    int16x8_t vreinterpretq_s16_f32 (float32x4_t)
    int16x8_t vreinterpretq_s16_p16 (poly16x8_t)
    int16x8_t vreinterpretq_s16_p8 (poly8x16_t)
    int32x2_t vreinterpret_s32_u32 (uint32x2_t)
    int32x2_t vreinterpret_s32_u16 (uint16x4_t)
    int32x2_t vreinterpret_s32_u8 (uint8x8_t)
    int32x2_t vreinterpret_s32_s16 (int16x4_t)
    int32x2_t vreinterpret_s32_s8 (int8x8_t)
    int32x2_t vreinterpret_s32_u64 (uint64x1_t)
    int32x2_t vreinterpret_s32_s64 (int64x1_t)
    int32x2_t vreinterpret_s32_f32 (float32x2_t)
    int32x2_t vreinterpret_s32_p16 (poly16x4_t)
    int32x2_t vreinterpret_s32_p8 (poly8x8_t)
    int32x4_t vreinterpretq_s32_u32 (uint32x4_t)
    int32x4_t vreinterpretq_s32_u16 (uint16x8_t)
    int32x4_t vreinterpretq_s32_u8 (uint8x16_t)
    int32x4_t vreinterpretq_s32_s16 (int16x8_t)
    int32x4_t vreinterpretq_s32_s8 (int8x16_t)
    int32x4_t vreinterpretq_s32_u64 (uint64x2_t)
    int32x4_t vreinterpretq_s32_s64 (int64x2_t)
    int32x4_t vreinterpretq_s32_f32 (float32x4_t)
    int32x4_t vreinterpretq_s32_p16 (poly16x8_t)
    int32x4_t vreinterpretq_s32_p8 (poly8x16_t)
    uint8x8_t vreinterpret_u8_u32 (uint32x2_t)
    uint8x8_t vreinterpret_u8_u16 (uint16x4_t)
    uint8x8_t vreinterpret_u8_s32 (int32x2_t)
    uint8x8_t vreinterpret_u8_s16 (int16x4_t)
    uint8x8_t vreinterpret_u8_s8 (int8x8_t)
    uint8x8_t vreinterpret_u8_u64 (uint64x1_t)
    uint8x8_t vreinterpret_u8_s64 (int64x1_t)
    uint8x8_t vreinterpret_u8_f32 (float32x2_t)
    uint8x8_t vreinterpret_u8_p16 (poly16x4_t)
    uint8x8_t vreinterpret_u8_p8 (poly8x8_t)
    uint8x16_t vreinterpretq_u8_u32 (uint32x4_t)
    uint8x16_t vreinterpretq_u8_u16 (uint16x8_t)
    uint8x16_t vreinterpretq_u8_s32 (int32x4_t)
    uint8x16_t vreinterpretq_u8_s16 (int16x8_t)
    uint8x16_t vreinterpretq_u8_s8 (int8x16_t)
    uint8x16_t vreinterpretq_u8_u64 (uint64x2_t)
    uint8x16_t vreinterpretq_u8_s64 (int64x2_t)
    uint8x16_t vreinterpretq_u8_f32 (float32x4_t)
    uint8x16_t vreinterpretq_u8_p16 (poly16x8_t)
    uint8x16_t vreinterpretq_u8_p8 (poly8x16_t)
    uint16x4_t vreinterpret_u16_u32 (uint32x2_t)
    uint16x4_t vreinterpret_u16_u8 (uint8x8_t)
    uint16x4_t vreinterpret_u16_s32 (int32x2_t)
    uint16x4_t vreinterpret_u16_s16 (int16x4_t)
    uint16x4_t vreinterpret_u16_s8 (int8x8_t)
    uint16x4_t vreinterpret_u16_u64 (uint64x1_t)
    uint16x4_t vreinterpret_u16_s64 (int64x1_t)
    uint16x4_t vreinterpret_u16_f32 (float32x2_t)
    uint16x4_t vreinterpret_u16_p16 (poly16x4_t)
    uint16x4_t vreinterpret_u16_p8 (poly8x8_t)
    uint16x8_t vreinterpretq_u16_u32 (uint32x4_t)
    uint16x8_t vreinterpretq_u16_u8 (uint8x16_t)
    uint16x8_t vreinterpretq_u16_s32 (int32x4_t)
    uint16x8_t vreinterpretq_u16_s16 (int16x8_t)
    uint16x8_t vreinterpretq_u16_s8 (int8x16_t)
    uint16x8_t vreinterpretq_u16_u64 (uint64x2_t)
    uint16x8_t vreinterpretq_u16_s64 (int64x2_t)
    uint16x8_t vreinterpretq_u16_f32 (float32x4_t)
    uint16x8_t vreinterpretq_u16_p16 (poly16x8_t)
    uint16x8_t vreinterpretq_u16_p8 (poly8x16_t)
    uint32x2_t vreinterpret_u32_u16 (uint16x4_t)
    uint32x2_t vreinterpret_u32_u8 (uint8x8_t)
    uint32x2_t vreinterpret_u32_s32 (int32x2_t)
    uint32x2_t vreinterpret_u32_s16 (int16x4_t)
    uint32x2_t vreinterpret_u32_s8 (int8x8_t)
    uint32x2_t vreinterpret_u32_u64 (uint64x1_t)
    uint32x2_t vreinterpret_u32_s64 (int64x1_t)
    uint32x2_t vreinterpret_u32_f32 (float32x2_t)
    uint32x2_t vreinterpret_u32_p16 (poly16x4_t)
    uint32x2_t vreinterpret_u32_p8 (poly8x8_t)
    uint32x4_t vreinterpretq_u32_u16 (uint16x8_t)
    uint32x4_t vreinterpretq_u32_u8 (uint8x16_t)
    uint32x4_t vreinterpretq_u32_s32 (int32x4_t)
    uint32x4_t vreinterpretq_u32_s16 (int16x8_t)
    uint32x4_t vreinterpretq_u32_s8 (int8x16_t)
    uint32x4_t vreinterpretq_u32_u64 (uint64x2_t)
    uint32x4_t vreinterpretq_u32_s64 (int64x2_t)
    uint32x4_t vreinterpretq_u32_f32 (float32x4_t)
    uint32x4_t vreinterpretq_u32_p16 (poly16x8_t)
    uint32x4_t vreinterpretq_u32_p8 (poly8x16_t) 

本 文介绍了arm-linux编译器针对ARM处理器NEON的内建Intrinsics指令的介绍，当-mfpu=neon编译选项使能时就可以在 C/C++代码内使用ARM的SIMD指令了，包括加法、乘法、比较、移位、绝对值 、极大极小极值运算、保存和加载指令等。 
