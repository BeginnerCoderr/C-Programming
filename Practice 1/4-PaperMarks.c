#include<stdio.h>
int main()
{
    int p1,p2,p3,total;
    float per;
    printf("Enter 3 papers mark = ");
    scanf("%d%d%d",&p1,&p2,&p3);
    total=p1+p2+p3;
    printf("Total is = %d \n",total);
    per=total/3;
    printf("Percentage is = %f",per);
    return 0;
}