#include<stdio.h>
int main()
{
    int bs,hra,da,ta,GS;
    printf("Enter basic salary = ");
    scanf("%d",&bs);
    hra=(bs*60)/100;
    da=(bs*50)/100;
    ta=(ta*40)/100;
    GS=hra+da+ta+bs;
    printf("Gross Salary = %d",GS);
    return 0;
}