#include<stdio.h>
int main()
{
    int l,h,w;
    float v;
    printf("Enter Lenght = ");
    scanf("%d",&l);
    printf("Enter Height = ");
    scanf("%d",&h);
    printf("Enter width = ");
    scanf("%d",&w);
    v=l*h*w;
    printf("Volumn of rectangle = %f",v);
    return 0;
}