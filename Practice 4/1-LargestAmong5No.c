#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);
    printf("Enter third number = ");
    scanf("%d",&c);
    printf("Enter fourth number = ");
    scanf("%d",&d);
    printf("Enter fifth number = ");
    scanf("%d",&e);
	
    if(a>b && a>c && a>d && a>e)
    {
    	printf("A Greater");
	}
	else if(b>a && b>c && b>d && b>e)
	{
		printf("B Greater");
	}
	else if(c>a && c>b && c>d && c>e)
	{
		printf("C Greater");
	}
	else if(d>a && d>b && d>c && d>e)
	{
		printf("D Greater");
	}
	else
	{
		printf("E Greater");
	}
 
    return 0;
}