#include<stdio.h>
#define PI 3.14
int main()
{
    int r,h;
    float v;
    printf("Enter radius = ");
    scanf("%d",&r);
    printf("Enter height = ");
    scanf("%d",&h);
    v=PI*r*r*h;
    printf("Volumn of cylinder = %f",v);
    return 0;
}
