#include<stdio.h>
int add(int x,int y);
int sub(int x,int y);
int multiply(int x,int y);
float div(float x,float y);
int modulus(int x,int y);
int main()
{
	int c;
	int a,b,d,h,l,j,z,s,p,e,f,g;
	float q,w,r;
	printf("\t--------------CALCULATOR------------------\t\n");
	printf("1.ADD\n");
	printf("2.SUBTRACTION\n");
	printf("3.MULTIPLY\n");
	printf("4.DIVIDE\n");
	printf("5.MODULUS\n");
	printf("Choose any number\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:

			printf("Enter the two numbers\t");
			scanf("%d %d",&a,&b);
			add(a,b);
			d=add(a,b);
			printf("The addition of the numbers are %d\n",d);
			break;


		case 2:
			printf("Enter the two numbers\t");
			scanf("%d %d",&e,&f);
			sub(e,f);
			g=sub(e,f);
			printf("The subtraction of the numbers are %d\n",g);
			break;

		case 3:
			printf("Enter the two numbers\t");
			scanf("%d %d",&h,&l);
			multiply(h,l);
			j=multiply(h,l);
			printf("The multiplication of the numbers are %d\n",j);
			break;

		case 4:
			printf("Enter the two numbers\t");
			scanf("%f %f",&q,&w);
			div(q,w);
			r=div(q,w);
			printf("The division of the numbers are %f\n",r);
			break;

		case 5:
			printf("Enter the two numbers\t");
			scanf("%d %d",&z,&s);
			modulus(z,s);
			p=modulus(z,s);
			printf("The modulus of the numbers are %d\n",p);
			break;

		default:
		printf("THANK YOU FOR VISITING\n");
		break;
	}
}
int add(int x,int y)
{
	int a;
	a=x+y;
	return a;
}
int sub(int x,int y)
{
	int a;
	a=x-y;
	return a;
}
int multiply(int x,int y)
{
	int a;
	a=x*y;
	return a;
}
float div(float x,float y)
{
	float a;
	a=x/y;
	return a;
}
int modulus(int x,int y)
{
	int a;
	a=x%y;
	return a;
}
