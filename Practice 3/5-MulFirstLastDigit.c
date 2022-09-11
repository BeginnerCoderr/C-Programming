#include<stdio.h>
int main()
{
    int num,a,b,c,d,e,mul;
    printf("Enter 9 digit number = ");
    scanf("%d",&num);
    a=num%10;
    num=num/100000000;
    e=num%10;
    mul=a*e;
    printf("Multiplicatioin of first and last digit = %d",mul);
    return 0;
}