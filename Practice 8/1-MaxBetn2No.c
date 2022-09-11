#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter First numbers = ");
    scanf("%d",&a);
    printf("Enter Second numbers = ");
    scanf("%d",&b);
    if(a>b)
        {
            printf("First number is greater");
        }
    else
        {
            printf("Second number is greater");
        }
    return 0;
}