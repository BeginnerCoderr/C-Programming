#include<stdio.h>
int main()
{
    int no,rev,a,b,c;
    printf("Enter any 3 digit no = ");
    scanf("%d",&no);
    a=no%10;
    no=no/10;
    b=no%10;
    no=no/10;
    c=no%10;
    rev=(a*100)+(b*10)+c;
    printf("Reverse value = %d",rev);
    return 0;
}