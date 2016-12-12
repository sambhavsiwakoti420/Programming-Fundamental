/*
Name:Sambhav Siwakoti
Subject:Programming Fundamental
Roll No.:31
Lab Sheet No.:11
Program:WAP to print largest among three numbers using ternary operator.
Date:12 December 2016
*/
#include<stdio.h>
#include<conio.h>
int main (){
int a=0,b=0,c=0;
printf("Enter the first number \n");
scanf("%d",&a);
printf("Enter the second number \n");
scanf("%d",&b);
printf("Enter the third number \n");
scanf("%d",&c);

(a>=b&&a>=c)?printf("%d is largest:",a):(b>=c&&b>=a)?printf("%d is largest:",b):printf("%d is largest:",c);

getch();
return 0;
}
