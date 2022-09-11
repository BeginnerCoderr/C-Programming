#include<stdio.h>
int main() {
	int a,b,c,x,p,q,r,res;
	printf("Enter value a = ");
	scanf("%d",&a);
	printf("Enter value b = ");
	scanf("%d",&b);
	printf("Enter value c = ");
	scanf("%d",&c);
	printf("Enter value x = ");
	scanf("%d",&x);
	printf("Enter value p = ");
	scanf("%d",&p);
	printf("Enter value q = ");
	scanf("%d",&q);
	printf("Enter value r = ");
	scanf("%d",&r);

	//1.(a+b)*(a+b)=(a*a)+(2*a*b)+(b*b)
	res=(a*a)+(2*a*b)+(b*b);
	printf("1.(a+b)*(a+b)=(a*a)+(2*a*b)+(b*b) = %d \n",res);

	//2.(a-b)*(a-b)=(a*a)-(2*a*b)+(b*b)
	res=(a*a)-(2*a*b)+(b*b);
	printf("2.(a-b)(a-b)=(a*a)-(2*a*b)+(b*b) = %d \n",res);

	//3.(a*a)+(b*b)=(a+b)(a+b)-(2*a*b)
	res=(a+b)*(a+b)-(2*a*b);
	printf("3.(a*a)+(b*b)=(a+b)(a+b)-(2*a*b) = %d \n",res);
	
	//4.(a*a)(b*b)=(a+b)*(a-b)
	res=(a+b)*(a-b);
	printf("4.(a*a)(b*b)=(a+b)*(a-b) = %d \n",res);
	
	//5.(a+b)*(a+b)=(a-b)*(a-b)+(4*a*b)
	res=(a-b)*(a-b)+(4*a*b);
	printf("5.(a+b)*(a+b)=(a-b)*(a-b)+(4*a*b) = %d \n",res);

	//6.(a-b)*(a-b)=(a+b)*(a+b)-(4*a*b)
	res=(a+b)*(a+b)-(4*a*b);
	printf("6.(a-b)*(a-b)=(a+b)*(a+b)-(4*a*b) = %d \n",res);
	
	//7.(a*a)+(b*b)=(a-b)*(a-b)+(2*a*b);
	res=(a-b)*(a-b)+(2*a*b);
	printf("7.(a*a)+(b*b)=(a-b)*(a-b)+(2*a*b) = %d \n",res);
	
	//8.2(a*a+b*b)=(a+b)*(a+b)+(a-b)*(a-b)
	res=(a+b)*(a+b)+(a-b)*(a-b);
	printf("8.2(a*a+b*b)=(a+b)*(a+b)+(a-b)*(a-b) = %d \n",res);
	
	//9.(a+b+c)*(a+b+c)=(a*a+b*b+c*c)+2*(a*b+b*c+c*a)
	res=(a*a+b*b+c*c)+2*(a*b+b*c+c*a);
	printf("9.(a+b+c)*(a+b+c)=(a*a+b*b+c*c)+2*(a*b+b*c+c*a) = %d \n",res);
	
	//10.(a*a+b*b+c*c)=(a+b+c)*(a+b+c)-2*(a*b+b*c+c*a)
	res=(a+b+c)*(a+b+c)-2*(a*b+b*c+c*a);
	printf("10.(a*a+b*b+c*c)=(a+b+c)*(a+b+c)-2*(a*b+b*c+c*a) = %d \n",res);
	
	//11.2(a*b+b*c+c*a)=(a+b+c)*(a+b+c)-(a*a+b*b+c*c)
	res=(a+b+c)*(a+b+c)-(a*a+b*b+c*c);
	printf("11.2(a*b+b*c+c*a)=(a+b+c)*(a+b+c)-(a*a+b*b+c*c) = %d \n",res);
	
	//12.(a+b)*(a+b)*(a+b)=(a*a*a)+3*(a*a*b)+3*(a*b*b)+(b*b*b)
	res=(a*a*a)+3*(a*a*b)+3*(a*b*b)+(b*b*b);
	printf("12.(a+b)*(a+b)*(a+b)=(a*a*a)+3*(a*a*b)+3*(a*b*b)+(b*b*b) = %d \n",res);
	
	//13.(a+b)*(a+b)*(a+b)=(a*a*a)+(b*b*b)+3*a*b*(a+b)
	res=(a*a*a)+(b*b*b)+3*a*b*(a+b);
	printf("13.(a+b)*(a+b)*(a+b)=(a*a*a)+(b*b*b)+3*a*b*(a+b) = %d \n",res);
	
	//14.(a-b)*(a-b)*(a-b)=(a*a*a)-3*(a*a*b)+3*(a*b*b)-(b*b*b)
	res=(a*a*a)-3*(a*a*b)+3*(a*b*b)-(b*b*b);
	printf("14.(a-b)*(a-b)*(a-b)=(a*a*a)-3*(a*a*b)+3*(a*b*b)-(b*b*b) = %d \n",res);
	
	//15.(a-b)*(a-b)*(a-b)=(a*a*a)-(b*b*b)-3*a*b*(a-b)
	res=(a*a*a)-(b*b*b)-3*a*b*(a-b);
	printf("15.(a-b)*(a-b)*(a-b)=(a*a*a)-(b*b*b)-3*a*b*(a-b) = %d \n",res);
	
	//16.(a*a*a)+(b*b*b)=(a+b)*(a*a-a*b+b*b)
	res=(a+b)*(a*a-a*b+b*b);
	printf("16.(a*a*a)+(b*b*b)=(a+b)*(a*a-a*b+b*b) = %d \n",res);
	
	//17.(a*a*a)+(b*b*b)=(a+b)*(a+b)*(a+b)-3*a*b*(a+b)
	res=(a+b)*(a+b)*(a+b)-3*a*b*(a+b);
	printf("17.(a*a*a)+(b*b*b)=(a+b)*(a+b)*(a+b)-3*a*b*(a+b) = %d \n",res);
	
	//18.(a*a*a)-(b*b*b)=(a-b)*(a*a+a*b+b*b)
	res=(a-b)*(a*a+a*b+b*b);
	printf("18.(a*a*a)-(b*b*b)=(a-b)*(a*a+a*b+b*b) = %d \n",res);
	
	//19.(a*a*a)-(b*b*b)=(a-b)*(a-b)*(a-b)+3*a*b*(a-b)
	res=(a-b)*(a-b)*(a-b)+3*a*b*(a-b);
	printf("19.(a*a*a)-(b*b*b)=(a-b)*(a-b)*(a-b)+3*a*b*(a-b) = %d \n",res);
	
	//20.(a+b+c)*(a+b+c)*(a+b+c)=(a*a*a)+(b*b*b)+(c*c*c)+3*(a+b)*(b+c)*(c+a)
	res=(a*a*a)+(b*b*b)+(c*c*c)+3*(a+b)*(b+c)*(c+a);
	printf("20.(a+b+c)*(a+b+c)*(a+b+c)=(a*a*a)+(b*b*b)+(c*c*c)+3*(a+b)*(b+c)*(c+a) = %d \n",res);
	
	//21.(a*a*a)+(b*b*b)+(c*c*c)-3*a*b*c=(a+b+c)*(a*a+b*b+c*c-a*b-b*c-c*a)
	res=(a+b+c)*(a*a+b*b+c*c-a*b-b*c-c*a);
	printf("21.(a*a*a)+(b*b*b)+(c*c*c)-3*a*b*c=(a+b+c)*(a*a+b*b+c*c-a*b-b*c-c*a) = %d \n",res);
	
	//22.(a*a*a)+(b*b*b)+(c*c*c)-3*a*b*c=1/2*(a+b+c){(a-b)*(a-b)+(b-c)*(b-c)+(c-a)*(c-a)}
	res=0.5*(a+b+c)*((a-b)*(a-b)+(b-c)*(b-c)+(c-a)*(c-a));
	printf("22.(a*a*a)+(b*b*b)+(c*c*c)-3*a*b*c=1/2*(a+b+c)*{(a-b)*(a-b)+(b-c)*(b-c)+(c-a)*(c-a)} = %d \n",res);
	
	//23.(4*a*b)=(a+b)*(a+b)-(a-b)*(a-b)
	res=(a+b)*(a+b)-(a-b)*(a-b);
	printf("23.(4*a*b)=(a+b)*(a+b)-(a-b)*(a-b) = %d \n",res);
	
	//24.a*b=((a+b)/2)*((a+b)/2)-((a+b)/2)*((a+b)/2)
	res=((a+b)*0.5)*((a+b)*2)-((a+b)*2)*((a+b)*2);
	printf("24.a*b=((a+b)/2)*((a+b)/2)-((a+b)/2)*((a+b)/2) = %d \n",res);
	
	//25.(x+a)*(x+b)=(x*x)+(a+b)*x+a*b
	res=(x*x)+(a+b)*x+a*b;
	printf("25.(x+a)*(x+b)=(x*x)+(a+b)*x+a*b = %d \n",res);
	
	//26.(x+a)*(x-b)=(x*x)+(a-b)*x-a*b
	res=(x*x)+(a-b)*x-a*b;
	printf("26.(x+a)*(x-b)=(x*x)+(a-b)*x-a*b = %d \n",res);
	
	//27.(x-a)*(x+b)=(x*x)+(b-a)*x-a*b
	res=(x*x)+(b-a)*x-a*b;
	printf("27.(x-a)*(x+b)=(x*x)+(b-a)*x-a*b = %d \n",res);
	
	//28.(x-a)*(x-b)=(x*x)-(a+b)*x+a*b
	res=(x*x)-(a+b)*x+a*b;
	printf("28.(x-a)*(x-b)=(x*x)-(a+b)*x+a*b = %d \n",res);

	//29.(x+p)*(x+q)*(x+r)=(x*x*x)+(p+q+r)*(x*x)+(p*q+q*r+r*p)*x+p*q*r
	res=(x*x*x)+(p+q+r)*(x*x)+(p*q+q*r+r*p)*x+p*q*r;
	printf("29.(x+p)*(x+r)*(x+c)=(x*x*x)+(p+q+r)*(x*x)+(p*q+q*r+r*p)*x+p*q*r = %d \n",res);

	//30.b*c*(b-c)+c*a(c-a)+a*b*(a-b)=-(b-c)*(c-a)*(a-b)
	res=-(b-c)*(c-a)*(a-b);
	printf("30.b*c*(b-c)+c*a(c-a)+a*b*(a-b)=-(b-c)*(c-a)*(a-b) = %d \n",res);
	
	//31.(a*a)*(b-c)+(b*b)*(c-a)+(c*c)*(a-b)=-(b-c)*(c-a)*(a-b)
	res=-(b-c)*(c-a)*(a-b);
	printf("31.(a*a)*(b-c)+(b*b)*(c-a)+(c*c)*(a-b)=-(b-c)*(c-a)*(a-b) = %d \n",res);

	//32.a*(b*b-c*c)+b*(c*c-a*a)+c*(a*a-b*b*)=(b-c)*(c-a)*(a*b)
	res=(b-c)*(c-a)*(a*b);
	printf("32.a*(b*b-c*c)+b*(c*c-a*a)+c*(a*a-b*b*)=(b-c)*(c-a)*(a*b) = %d \n",res);
	
	//33.(a*a*a)*(b-c)+(b*b*b)*(c-a)+(c*c*c)*(a-b)=-(b-c)*(c-a)*(a-b)*(a+b+c)
	res=-(b-c)*(c-a)*(a-b)*(a+b+c);
	printf("33.(a*a*a)*(b-c)+(b*b*b)*(c-a)+(c*c*c)*(a-b)=-(b-c)*(c-a)*(a-b)*(a+b+c) = %d \n",res);

	//34.(b*b)*(c*c)*(b*b-c*c)+(c*c)*(a*a)*(c*c-a*a)=(a*a*)*(b*b*)*(a*a-b*b)=-(b-a)*(c-a)*(a-b)*(b+a)*(c+a)*(a+b)
	res=-(b-a)*(c-a)*(a-b)*(b+a)*(c+a)*(a+b);
	printf("34.(b*b)*(c*c)*(b*b-c*c)+(c*c)*(a*a)*(c*c-a*a)=(a*a*)*(b*b*)*(a*a-b*b)=-(b-a)*(c-a)*(a-b)*(b+a)*(c+a)*(a+b) = %d \n",res);

	//35.(a*b+b*c+c*a)*(a+b+c)-a-b-c=(a+b)*(b+c)*(c+a)
	res=(a+b)*(b+c)*(c+a);
	printf("35.(a*b+b*c+c*a)*(a+b+c)-a-b-c=(a+b)*(b+c)*(c+a) = %d \n",res);

	//36.(b+c)*(c+a)*(a+b)+a*b*c=(a+b+c)*(a*b+b*c+c*a)
	res=(a+b+c)*(a*b+b*c+c*a);
	printf("36.(b+c)*(c+a)*(a+b)+a*b*c=(a+b+c)*(a*b+b*c+c*a) = %d \n",res);
	return 0;
}