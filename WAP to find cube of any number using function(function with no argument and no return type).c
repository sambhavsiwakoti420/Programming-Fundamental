/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:18
Roll No.:
Program:WAP to find cube of any number using function(function with no argument and no return type)
Date:18 January 2017
*/
#include<stdio.h>
void cube();

int main()
{
    cube();
    return 0;
}
void cube()
{

    int n,result;
    printf("Enter the number \n");
    scanf("%d",&n);
    result=n*n*n;
    printf("Cube of number is:%d \n",result);
}
