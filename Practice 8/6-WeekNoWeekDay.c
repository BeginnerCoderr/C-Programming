#include <stdio.h>
int main()
{
    int w;
    printf("Enter week number = ");
    scanf("%d", &w);
    if(w == 1)
    {
        printf("Monday");
    }
    else if(w == 2)
    {
        printf("Tuesday");
    }
    else if(w == 3)
    {
        printf("Wednesday");
    }
    else if(w == 4)
    {
        printf("Thursday");
    }
    else if(w == 5)
    {
        printf("Friday");
    }
    else if(w == 6)
    {
        printf("Saturday");
    }
    else if(w == 7)
    {
        printf("Sunday");
    }
    return 0;
}