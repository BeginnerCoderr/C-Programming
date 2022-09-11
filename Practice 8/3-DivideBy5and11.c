#include<stdio.h>
int main()
{
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    if(a%5==0 && a%11==0)
    {
        printf("Number divisible by 5 and 11");
    }
    
    else
    {
        printf("Number not divisible by 5 and 11");
    }
    return 0;
}