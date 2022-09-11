#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);
    printf("Enter third number = ");
    scanf("%d",&c);

    if(a<b && a<c)
    {
        printf("A is smallest");
    }
    else if(b<a && b<c)
    {
        printf("B is smallest");
    }
    else
    {
        printf("C is smallest");
    }
    return 0;
}