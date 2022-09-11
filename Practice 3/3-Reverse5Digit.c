#include<stdio.h>
int main()
{
    int num,a,b,c,d,e,rev;
    printf("Enter 5 digit number = ");
    scanf("%d",&num);
    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    c=num%10;
    num=num/10;
    d=num%10;
    num=num/10;
    e=num%10;
    rev=(a*10000)+(b*1000)+(c*100)+(d*10)+e;
    printf("Reverse number = %d",rev);
    return 0;
}