#include<stdio.h>
int main()
{
    int p,r,t,SI;
    printf("Enter Principle amount = ");
    scanf("%d",&p);
    printf("Enter Interest rate = ");
    scanf("%d",&r);
    printf("Enter Time = ");
    scanf("%d",&t);
    SI=(p*r*t)/100;
    printf("Simple Interest is = %d",SI);
    return 0;
}