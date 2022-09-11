#include<stdio.h>
int main()
{
    float u,bill;
    printf("Enter total unit = ");
    scanf("%f",&u);

    if(u <=50)
    {
        bill=u*0.50;
        printf("Electricity Bill = %f",bill);
    }
    else if(u >=51 && u <=100)
    {
        bill=u*0.75;
        printf("Electricity Bill = %f",bill);
    }
    else if(u >=101 && u <=200)
    {
        bill=u*1.20;
        printf("Electricity Bill = %f",bill);
    }
    else if(u >=201)
    {
        bill=u*1.50;
        printf("Electricity Bill = %f",bill);
    }
    return 0;
}