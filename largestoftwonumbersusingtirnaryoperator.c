/*
Name:Sambhav Siwakoti
Subject:Programming Fundamental
Roll No.:31
Lab Sheet No.:11
Program:WAP to print largest of two numbers using ternary operator.
Date:12 December 2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a,b;
printf("Enter the first number \n");
scanf("%d",&a);
printf("Enter the second number \n");
scanf("%d",&b);


(a>=b)?printf("First number is largest:%d",a):printf("second number is largest:%d",b);



getch();
return 0;
}
