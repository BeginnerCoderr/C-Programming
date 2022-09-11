#include<stdio.h>
int main()
{
    int no;
    int rem,sum;
    printf("enter any number = ");
    scanf("%d",&no);

    sum=0;
    while(no > 0)
    {
        rem=no%10; 
        no=no/10;
        sum=sum+rem;
    }
    printf("Sum of digits = %d",sum);
    return 0;
}