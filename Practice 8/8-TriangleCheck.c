#include<stdio.h>
int main()
{
    int s;
    printf("Enter side = ");
    scanf("%d",&s);

    if(s == 3)
    {
        printf("This is triangle");
    }
    else
    {
        printf("This is not triangle");
    }
    return 0;
}