#include<stdio.h>
int main()
{
    int no,total,rem,n;
    printf("Enter number = ");
    scanf("%d",&no);
    n=no;
    total=0;
    rem=0;
    while(no > 0)
    {
        rem=no%10;
        total=total+(rem*rem*rem);
        no=no/10;  
    }
    if(total == n)
    {
        printf("This is armstrong number = %d",total);
    }
    else
    {
        printf("This is not armstrong number = %d",total);
    }
    return 0;
}