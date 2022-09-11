#include<stdio.h>
int main()
{
    char c;
    printf("Enter character = ");
    scanf("%c",&c);

    if(c>=65 && c<=90)
    {
        printf("Character is Upper case");
    }
    else if(c>=97 && c<=122)
    {
        printf("Character is Lower case");
    }
    else if(c>=48 && c<=57)
    {
        printf("Character is Digit");
    }
    else
    {
        printf("Character is symbol");
    }
    return 0;
}