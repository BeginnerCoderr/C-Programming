#include<stdio.h>
int main()
{
    int p1,p2,p3,total,per;
    char gen;
    printf("Enter your gender M for male and F for female = ");
    scanf("%c",&gen);
    printf("Enter Paper 1 mark = ");
    scanf("%d",&p1);
    printf("Enter Paper 2 mark = ");
    scanf("%d",&p2);
    printf("Enter Paper 3 mark = ");
    scanf("%d",&p3);
   
    
    total=p1+p2+p3;
    per=total/3;

    printf("Percentage = %d \n",per);
    if(per>=62 && gen == 'F' )
    {
        printf("You can take admission");
    }
    else
    {
        printf("You can't take admission");
    }

    return 0;
}