#include<stdio.h>
int main()
{
    int t,min;
    int d,m,y;
    char source[10],destination[10];
    int p,total;
    printf("Enter time(24 format) = ");
    scanf("%d",&t);
    printf("Enter minute = ");
    scanf("%d",&min);
    printf("Enter date = ");
    scanf("%d",&d);
    printf("Enter month = ");
    scanf("%d",&m);
    printf("Enter year = ");
    scanf("%d",&y);
    printf("Enter Source = ");
    scanf("%s",&source);
    printf("Enter Destination = ");
    scanf("%s",&destination);
    printf("Enter passangers = ");
    scanf("%d",&p);
    total=p*120;

    printf("------------------------------------------------------------------- \n");
    printf("                            TRAIN TICKET                          \n");
    printf("------------------------------------------------------------------- \n");
 
    printf("Date: %d-%d-%d                                  Time: %d:%d \n",d,m,y,t,min);
    printf("------------------------------------------------------------------- \n");
    printf("FROM: %s \n",source);
    printf("TO: %s \n",destination);
    printf("------------------------------------------------------------------- \n");
    printf("No of passangers = %d \n",p);
    printf("Fare per passangers = 120 \n");
    printf("------------------------------------------------------------------- \n");
    printf("Total Fare = %d \n",total);
    printf("------------------------------------------------------------------- \n");
    printf("                            HAPPY JOURNEY                           \n");
    printf("------------------------------------------------------------------- \n");
    return 0;
}