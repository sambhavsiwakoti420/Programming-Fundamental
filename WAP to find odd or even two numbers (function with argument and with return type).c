/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:20
Roll No.:
Program: WAP to find odd or even two numbers (function with argument and with return type).
Date: 25 January 2017
*/
#include<stdio.h>
#include<conio.h>
int number(int n);
int main()
{
    int n,result;
    printf("Enter the number \n");
    scanf("%d",&n);
    result=number(n);
    if(result==0)
        printf("The number is even");
        else
        printf("The number is odd");
    return 0;
}
int number(int n)
{
    if(n%2==0)
        return 0;
    else
        return 1;
}
