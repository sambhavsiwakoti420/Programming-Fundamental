/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:20
Roll No.:
Program: WAP to enter numbers and find the sum using function(function with no argument and no return type).
Date: 25 January 2017
*/
#include<stdio.h>
#include<conio.h>
void sum();
void main(){
    sum();
}
void sum()
{
    int a,b,add;
    printf("Enter the first number \n");
    scanf("%d",&a);
    printf("Enter the second number \n");
    scanf("%d",&b);
    add=a+b;
    printf("The sum of two number is:%d \n",add);
}
