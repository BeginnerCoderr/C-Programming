#include<stdio.h>
int main()
{
    int bs,hra,da,GS;
    printf("Enter basic salary = ");
    scanf("%d",&bs);
    
    if(bs <= 10000)
    {
        hra=(bs*20)/100;
        da=(bs*80)/100;
        GS=hra+da+bs;
        printf("Gross Salary = %d",GS);
    }
    else if(bs <= 20000)
    {
        hra=(bs*25)/100;
        da=(bs*90)/100;
        GS=hra+da+bs;
        printf("Gross Salary = %d",GS);
    }
    else if(bs > 20000)
    {
        hra=(bs*30)/100;
        da=(bs*95)/100;
        GS=hra+da+bs;
        printf("Gross Salary = %d",GS);
    }
    return 0;
}