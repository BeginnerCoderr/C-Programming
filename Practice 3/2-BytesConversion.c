#include<stdio.h>
int main()
{
    float bytes,bits,kb,mb,gb,tb;
    printf("Enter Value(bytes) = ");
    scanf("%f",&bytes);
    bits=bytes*8;
    kb=bytes/1000;
    mb=kb/1000;
    gb=mb/1000;
    tb=gb/1000;
    printf("%f bytes = %f bits \n",bytes,bits);
    printf("%f bytes = %f kilobytes \n",bytes,kb);
    printf("%f kilobytes = %f megabytes \n",kb,mb);
    printf("%f megabytes = %f gigabytes \n",mb,gb);
    printf("%f gigabytes = %f terabytes \n",gb,tb);
    return 0;
}