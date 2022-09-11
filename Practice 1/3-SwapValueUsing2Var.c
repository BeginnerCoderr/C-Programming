#include<stdio.h>
int main()
{
    int a,b,third;
    printf("Enter a and b = ");
    scanf("%d%d",&a,&b);
    printf("Before swap values a=%d b=%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap values a=%d b=%d \n",a,b);
    return 0;
}