/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:20
Roll No.:
Program: WAP to find minimum number between two numbers (function without argument and with return type).
Date: 25 January 2017
*/
#include<stdio.h>
#include<conio.h>
int minimum();
int main()
{
    int result;
    result=minimum();
    printf("The minimum number is :%d",result);
    return 0;

}
int minimum()
{
int a,b;
printf("Enter the first number \n");
scanf("%d",&a);
printf("Enter the second number \n");
scanf("%d",&b);
if(a<b)
    return a;
else
    return b;

}
