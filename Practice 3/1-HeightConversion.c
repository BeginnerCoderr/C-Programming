#include<stdio.h>
int main()
{
    float h,inch,cm,res;
    printf("Enter height(feet) = ");
    scanf("%f",&h);
    inch=h*12;
    cm=h*30.48;
    printf("Converted into inch = %f \n",inch);
    printf("Converted into centimeter = %f",cm);
    return 0;
}