#include<stdio.h>
int main()
{
    int p1,p2,p3;
    printf("Enter Paper 1 mark = ");
    scanf("%d",&p1);
    printf("Enter Paper 2 mark = ");
    scanf("%d",&p2);
    printf("Enter Paper 3 mark = ");
    scanf("%d",&p3);


    if(p1>=45 && p2>=45 && p3>=45)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}