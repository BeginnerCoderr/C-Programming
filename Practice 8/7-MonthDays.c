#include<stdio.h>
int main()
{
    int m;
    printf("1.January \n");
    printf("2.February \n");
    printf("3.March \n");
    printf("4.April \n");
    printf("5.May \n");
    printf("6.June \n");
    printf("7.July \n");
    printf("8.August \n");
    printf("9.September \n");
    printf("10.Octomber \n");
    printf("11.November \n");
    printf("12.December \n");
    printf("Enter month number  = ");
    scanf("%d",&m);

    if(m == 1)
    {
        printf("31 days");
    }
    if(m == 2)
    {
        printf("28/29 days");
    }
    if(m == 3)
    {
        printf("31 days");
    }
    if(m == 4)
    {
        printf("30 days");
    }
    if(m == 5)
    {
        printf("31 days");
    }
    if(m == 6)
    {
        printf("30 days");
    }
    if(m == 7)
    {
        printf("31 days");
    }
    if(m == 8)
    {
        printf("31 days");
    }
    if(m == 9)
    {
        printf("30 days");
    }
    if(m == 10)
    {
        printf("31 days");
    }
    if(m == 11)
    {
        printf("30 days");
    }
    if(m == 12)
    {
        printf("31 days");
    }
    return 0;
}