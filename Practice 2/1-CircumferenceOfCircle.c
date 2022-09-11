#include<stdio.h>
int main()
{
    float radius,circum;
    float PI=3.14;
    printf("Enter radius = ");
    scanf("%f",&radius);
    circum=2*PI*radius;
    printf("Circumference = %f",circum);
    return 0;
}