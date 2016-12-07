/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Roll No.:31
Lab Sheet No.:10
Program:WAP to print largest numbers.
Date:7 November 2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c;
printf("Enter then first number /n");
scanf("%d",&a);
printf("Enter the second number /n");
scanf("%d",&b);
printf("Enter the third number /n");
scanf("%d",&c);

if(a>=b&&a>=c)
{
    printf("%d is largest \n",a);
}

else if(b>=a&&b>=c)
{
    printf("%d is largest \n",b);
}
else

{
      printf("%d is largest \n",c);
}
getch();
return 0;
}


