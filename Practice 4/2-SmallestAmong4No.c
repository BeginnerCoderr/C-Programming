#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter first Number = ");
    scanf("%d",&a);
    printf("Enter second Number = ");
    scanf("%d",&b);
    printf("Enter third Number = ");
    scanf("%d",&c);
    printf("Enter fourth Number = ");
    scanf("%d",&d);

    if(a<b)
    {
        if(a<c)
        {
            if(a<d)
            {
                printf("A smallest");
            }
            else{
                printf("D smallest");
            }
        }
        else if(c<d)
        {
            printf("C smallest");
        }
        else{
            printf("D smallest");
        }
    }
    else if(b<a)
    {
        if(b<c)
        {
            if(b<d)
            {
                printf("B smallest");
            }
            else
            {
                printf("D smallest");
            }
        }
        else if(c<d)
        {
            printf("C smallest");
        }
        else{
            printf("D smallest");
        }
    }
    else if(c<a)
    {
        if(c<b)
        {
            if(c<d)
            {
                printf("C smallest");
            }
            else
            {
                printf("D smallest");
            }
        }
        else if(b<d)
        {
            printf("B smallest");
        }
        else
        {
            printf("D smallest");
        }
    }
    else if(d<a)
    {
        if(d<b)
        {
            if(d<c)
            {
                printf("D smallest");
            }
            else
            {
                printf("C smallest");
            }
        }
        else if(b<c)
        {
            printf("B smallest");
        }
        else
        {
            printf("C smallest");
        }
    }
return 0;
}