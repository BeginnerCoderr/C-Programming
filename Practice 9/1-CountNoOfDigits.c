#include<stdio.h>
int main()
{
    int no;
    int i;
    printf("enter any number = ");
    scanf("%d",&no);

    i=0;
    while(no > 0)
    {
        no=no/10;
        i++;
    }
    printf("Total digts of = %d",i);
    return 0;
}