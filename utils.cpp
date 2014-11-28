#include "utils.h"
#include <stdlib.h>
#include <memory.h>
#define TRIMBYTE(x) (unsigned char)((x)&(~255)?((-(x))>>31):(x))
char* Utils::copyString(const char* src)
{
    if (!src) {
        return 0;
    }
    int size = strlen(src);
    char* dest = new char[size + 1];
    memcpy(dest, src, size);
    dest[size] = '\0';
    return dest;
}
void Utils::Decrypt(char* src, int length, char* out, int &outlength)
{
    if (length % 2 != 0)
        return ;
    //out = new char[length / 2];
    char* stop;
    char hex[3] = {0};
    int j = 0;
    for(int i = 0; i < length; i+=2)
    {
        memcpy(hex, src + i, 2);
        out[j] = (char)strtol(hex, &stop, 16);
        //ALOGD("%d",out[j]);
        j++;
    }
    outlength = j;
}
void Utils::split(char *src, const char *separator, char **dest, int *num)
{
    char *pNext;
    int count = 0;
    if (src == NULL || strlen(src) == 0) return;
    if (separator == NULL || strlen(separator) == 0) return;
    pNext = strtok(src,separator);
    while(pNext != NULL)
    {
        *dest++ = pNext;
        ++count;
        pNext = strtok(NULL,separator);
    }
    *num = count;
}
int Utils::getValueTimes(int value, int times){
    int mode = value % times;
    if(0==mode){
        return value;
    }
    return value + (times-mode);
}
void Utils::rgb2Yuv420(char* ybuffer, char* uvbuffer, char* rgba, int width, int height)
{
    int len = width * height;
    unsigned char* y = (unsigned char*)ybuffer;
    unsigned char* uv = (unsigned char*)uvbuffer;
    unsigned char* prgb = (unsigned char*)rgba;
    unsigned char R,G,B;
    unsigned char U,V;
    for(int h =0 ;h < height; h ++){
        if(h%2){
            for(int w=0; w < width; w+=2){
                R = *prgb++;
                G = *prgb++;
                B = *prgb++;
                *y++ = ( (  66 * R + 129 * G +  25 * B + 128) >> 8) +  16 ;
                U = ( ( -38 * R -  74 * G + 112 * B + 128) >> 8) + 128;
                V = ( ( 112 * R -  94 * G -  18 * B + 128) >> 8) + 128;
                *uv++ = V;
                *uv++ = U;
                R = *prgb++;
                G = *prgb++;
                B = *prgb++;
                *y++ = ( (  66 * R + 129 * G +  25 * B + 128) >> 8) +  16 ;
            }
        }else {
            for(int w=0; w < width; w++){
                R = *prgb++;
                G = *prgb++;
                B = *prgb++;
                *y++ = ( (  66 * R + 129 * G +  25 * B + 128) >> 8) +  16 ;
            }
        }
    }
}
void Utils::Yuv4202Rgba(unsigned char *pSrcY, unsigned char *pSrcUV, int srcwidth, int srcheight, int srcpitch,
                    unsigned char *pRGB, int dstwidth, int dstheight, int dstpitch)
{
    int x,y;
    int r,g,b;
    int Cb,Cr;
    int Y1, Y2, Y3, Y4, Ydiff;
    int offsetbgr, offsetyuv;
    unsigned char *pRGBNext = pRGB + dstpitch;
    unsigned char * pY = pSrcY;
    unsigned char * pYNext = pSrcY+srcpitch;
    unsigned char * pUV = pSrcUV;
    offsetbgr = dstpitch - srcwidth*4;
    offsetyuv = srcpitch - srcwidth;
    y = srcheight;
    while (y > 0)
    {
        y -= 2;
        x = srcwidth >> 1;
        while ( x-- > 0)
        {
            Y1 = *pY++;
            Cr = *pUV++ - 128;
            Cb = *pUV++ - 128;
            r = Y1+((91881*Cr+32768)>>16);
            g = Y1-((22554*Cb+46802*Cr+32768)>>16);
            b = Y1+((116130*Cb+32768)>>16);
            *pRGB++ = TRIMBYTE(r);
            *pRGB++ = TRIMBYTE(g);
            *pRGB++ = TRIMBYTE(b);
            *pRGB++ = 255;
            Y2 = *pY++;
            Ydiff = Y2 - Y1;
            r += Ydiff;
            g += Ydiff;
            b += Ydiff;
            *pRGB++ = TRIMBYTE(r);
            *pRGB++ = TRIMBYTE(g);
            *pRGB++ = TRIMBYTE(b);
            *pRGB++ = 255;
            Y3 = *pYNext++;
            Ydiff = Y3 - Y2;
            r += Ydiff;
            g += Ydiff;
            b += Ydiff;
            *pRGBNext++ = TRIMBYTE(r);
            *pRGBNext++ = TRIMBYTE(g);
            *pRGBNext++ = TRIMBYTE(b);
            *pRGBNext++ = 255;
            Y4 = *pYNext++;
            Ydiff = Y4 - Y3;
            r += Ydiff;
            g += Ydiff;
            b += Ydiff;
            *pRGBNext++ = TRIMBYTE(r);
            *pRGBNext++ = TRIMBYTE(g);
            *pRGBNext++ = TRIMBYTE(b);
            *pRGBNext++ = 255;
        }
        pY += offsetyuv + srcpitch;
        pYNext = pY + srcpitch;
        pUV += offsetyuv;
        pRGB += offsetbgr + dstpitch;
        pRGBNext = pRGB + dstpitch;
    }
}
void Utils::Yuv4202Rgb(unsigned char *pSrcY, unsigned char *pSrcUV, int srcwidth, int srcheight, int srcpitch,
                    unsigned char *pRGB, int dstwidth, int dstheight, int dstpitch)
{
    int x,y;
    int r,g,b;
    int Cb,Cr;
    int Y1, Y2, Y3, Y4, Ydiff;
    int offsetbgr, offsetyuv;
    unsigned char *pRGBNext = pRGB + dstpitch;
    unsigned char * pY = pSrcY;
    unsigned char * pYNext = pSrcY+srcpitch;
    unsigned char * pUV = pSrcUV;
    offsetbgr = dstpitch - srcwidth*3;
    offsetyuv = srcpitch - srcwidth;
    y = srcheight;
    while (y > 0)
    {
        y -= 2;
        x = srcwidth >> 1;
        while ( x-- > 0)
        {
            Y1 = *pY++;
            Cr = *pUV++ - 128;
            Cb = *pUV++ - 128;
            r = Y1+((91881*Cr+32768)>>16);
            g = Y1-((22554*Cb+46802*Cr+32768)>>16);
            b = Y1+((116130*Cb+32768)>>16);
            *pRGB++ = TRIMBYTE(r);
            *pRGB++ = TRIMBYTE(g);
            *pRGB++ = TRIMBYTE(b);
            Y2 = *pY++;
            Ydiff = Y2 - Y1;
            r += Ydiff;
            g += Ydiff;
            b += Ydiff;
            *pRGB++ = TRIMBYTE(r);
            *pRGB++ = TRIMBYTE(g);
            *pRGB++ = TRIMBYTE(b);
            Y3 = *pYNext++;
            Ydiff = Y3 - Y2;
            r += Ydiff;
            g += Ydiff;
            b += Ydiff;
            *pRGBNext++ = TRIMBYTE(r);
            *pRGBNext++ = TRIMBYTE(g);
            *pRGBNext++ = TRIMBYTE(b);
            Y4 = *pYNext++;
            Ydiff = Y4 - Y3;
            r += Ydiff;
            g += Ydiff;
            b += Ydiff;
            *pRGBNext++ = TRIMBYTE(r);
            *pRGBNext++ = TRIMBYTE(g);
            *pRGBNext++ = TRIMBYTE(b);
        }
        pY += offsetyuv + srcpitch;
        pYNext = pY + srcpitch;
        pUV += offsetyuv;
        pRGB += offsetbgr + dstpitch;
        pRGBNext = pRGB + dstpitch;
    }
}
