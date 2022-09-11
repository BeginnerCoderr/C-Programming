#include<stdio.h>
int main()
{
    char d;
    printf("Enter day(mon=m,tue=t,wed=w,thu=t,fri=f,sat=s,sun=s) = ");
    scanf("%c",&d);

    if(d == 'm' || d == 't' || d == 'w' || d == 't' || d == 'f')
    {
        printf("Working day");
    }
    else if(d == 's')
    {
        printf("Weekend day");
    }
    else
    {
        printf("Invalid day");
    }
    return 0;
}