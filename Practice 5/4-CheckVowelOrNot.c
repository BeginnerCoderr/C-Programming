#include<stdio.h>
int main()
{
    char v;
    printf("Enter characters = ");
    scanf("%c",&v);

    if(v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u')
    {
        printf("Character is vowel ");
    }
    else
    {
        printf("Character is not vowel");
    }
    return 0;
}