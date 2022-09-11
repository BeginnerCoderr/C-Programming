#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter centigrade = ");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("Fahrenheit = %f",f);
    return 0;
}