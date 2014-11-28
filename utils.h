#ifndef __UTILS_H__
#define __UTILS_H__
class Utils
{
    public:
        static char* copyString(const char* src);
        static void Decrypt(char* src, int length, char* out, int &outlength);
        static void split(char *src, const char *separator, char **dest, int *num);
        static int getValueTimes(int value, int times);
        static void rgb2Yuv420(char* ybuffer, char* uvbuffer, char* rgba, int width, int height);
        static void Yuv4202Rgba(unsigned char *pSrcY, unsigned char *pSrcUV, int srcwidth, int srcheight, int srcpitch,
                unsigned char *pRGB, int dstwidth, int dstheight, int dstpitch);
        static void Yuv4202Rgb(unsigned char *pSrcY, unsigned char *pSrcUV, int srcwidth, int srcheight, int srcpitch,
                unsigned char *pRGB, int dstwidth, int dstheight, int dstpitch);
};
#endif // end __UTILS_H__
