#include<stdio.h>
int main()
{
    int num,a,b,c,d,e,sum;
    printf("Enter 5 digit number = ");
    scanf("%d",&num);
    a=num%10;
    num=num/10000;
    e=num%10;
    sum=a+e;
    printf("Sum of first and last digit = %d",sum);
    return 0;
}