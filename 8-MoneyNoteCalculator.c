#include<stdio.h>
int main()
{
    int amt,note,temp,ramt;
    printf("Enter amount = ");
    scanf("%d",&amt);
    printf("Amount = %d \n",amt);


    switch(2000)
    {
        case 2000:
        note=amt/2000;
        ramt=amt%2000;
        printf("2000 note = %d \n",note);
    

        case 500:
        note=ramt/500;
        ramt=ramt%500;
        printf("500 note = %d \n",note);

        case 200:
        note=ramt/200;
        ramt=ramt%200;
        printf("200 note = %d \n",note);

        case 100:
        note=ramt/100;
        ramt=ramt%100;
        printf("100 note = %d \n",note);

        case 50:
        note=ramt/50;
        ramt=ramt%50;
        printf("50 note = %d \n",note);

        case 20:
        note=ramt/20;
        ramt=ramt%20;
        printf("20 note = %d \n",note);

        case 10:
        note=ramt/10;
        ramt=ramt%10;
        printf("10 note = %d \n",note);
        break;
    }
    return 0;
}