#include<stdio.h>
int main()
{
    float p,c,b,m,com,total,per;
    printf("Enter Physics mark = ");
    scanf("%f",&p);
    printf("Enter Chemistry mark = ");
    scanf("%f",&c);
    printf("Enter Biology mark = ");
    scanf("%f",&b);
    printf("Enter Mathematics mark = ");
    scanf("%f",&m);
    printf("Enter Computer mark = ");
    scanf("%f",&com);

    total=p+c+b+m+com;
    per=total/5;

    printf("PERCENTAGE = %f \n",per);

    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else if(per < 40)
    {
        printf("Grade F");
    }
    return 0;

}