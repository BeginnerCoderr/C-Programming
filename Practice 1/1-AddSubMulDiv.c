#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a and b = ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Addition = %d \n",c);
    c=a-b;
    printf("Subtraction = %d \n",c);
    c=a*b;
    printf("Multiplication = %d \n",c);
    c=a/b;
    printf("Quoteint = %d \n",c);
    c=a%b;
    printf("Remainder = %d",c);
    return 0;
}