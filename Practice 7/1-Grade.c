#include<stdio.h>
int main()
{
    int p1,p2,p3,p4,total;
    float per;

    printf("Enter Paper 1 mark = ");
    scanf("%d",&p1);
    printf("Enter Paper 2 mark = ");
    scanf("%d",&p2);
    printf("Enter Paper 3 mark = ");
    scanf("%d",&p3);
    printf("Enter Paper 4 mark = ");
    scanf("%d",&p4);

    total=p1+p2+p3+p4;
    per=total/4;

    printf("Total = %d \n",total);
    printf("Percentage = %f \n",per);

    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
    else if(per>=70)
    {
        printf("Grade C");
    }
    else if(per>=60)
    {
        printf("Grade D");
    }
    else if(per>=40)
    {
        printf("Grade E");
    }
    else if (per<40)
    {
        printf("FAIL");
    }
    return 0;
}