#include<stdio.h>
int main()
{
    int a,b,third;
    printf("Enter a and b = ");
    scanf("%d%d",&a,&b);
    printf("Before swap values a=%d b=%d \n",a,b);
    third=a;
    a=b;
    b=third;
    printf("After swap values a=%d b=%d \n",a,b);
    return 0;
}