/*
Student Name:Sambhav Siwakoti
Subject:Programming fundamental
Lab Sheet No.:12
Roll No.:31
Program:WAP to make Simple calculator.
Date:17 December 2016
*/
#include<conio.h>
int main ()
{
    int a,b,n,addition,subtraction,multiply,divide;
    printf("\t\t***************************************\n"  );
    printf("\t\t***#################################***\n"  );
    printf("\t\t***#       Simple Calculator       #***\n"  );
    printf("\t\t***************************************\n"  );
    printf("\t\t***************************************\n"  );
    printf("\t\t***#       Choose The Number       #***\n"  );
    printf("1.Addition  \n");
    printf("2.Subtraction   \n");
    printf("3.Multiplication    \n");
    printf("4.Division    \n");
    printf("5.Exit     \n");
    printf("Choose The Number   \n");
    scanf("%d",&n);

switch(n){
case 1:
    printf("Enter the first number  \n");
    scanf("%d",&a);
    printf("Enter the second number  \n");
    scanf("%d",&b);
    addition=a+b;
    printf("The sum of two number is:%d    \n",addition);
    break;
case 2:
    printf("Enter the first number  \n");
    scanf("%d",&a);
    printf("Enter the second number  \n");
    scanf("%d",&b);
    subtraction=a-b;
    printf("The difference of two number is:%d    \n",subtraction);
    break;
case 3:
    printf("Enter the first number  \n");
    scanf("%d",&a);
    printf("Enter the second number  \n");
    scanf("%d",&b);
    multiply=a*b;
    printf("The multiplication of two number is:%d    \n",multiply);
    break;
case 4:
    printf("Enter the first number  \n");
    scanf("%d",&a);
    printf("Enter the second number  \n");
    scanf("%d",&b);
    divide=a/b;
    printf("The division of two number is:%d    \n",divide);
    break;
default:
    printf("***#         Thank You          #***    \n");


}

getch();
return 0;
}
