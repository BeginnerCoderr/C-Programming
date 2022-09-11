#include<stdio.h>
int main()
{
    int no,rem,total,temp,n;
    printf("Enter number = ");
    scanf("%d",&no);

    rem=0;
    temp=0;
    n=no;
    while(no > 0)
    {
        rem=no%10;
        temp=temp*10+rem;
        no=no/10;
    }
    if(temp == n)
    {
        printf("%d This number is palindrome",temp);
    }
    else
    {
        printf("%d This number is not palindrome",temp);    
    }
    return 0;
}