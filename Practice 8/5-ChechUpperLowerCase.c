#include<stdio.h>
int main()
{
    char c;
    printf("Enter character = ");
    scanf("%c",&c);

    if(c>=65 && c<=90)
    {
        printf("Character is Upper Case");
    }
    else if(c>=97 && c<=122)
    {
        printf("Character is Lower case");
    }
    else
    {
        printf("Not Character");
    }
    return 0;
}