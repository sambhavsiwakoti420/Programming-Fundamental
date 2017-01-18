/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:18
Roll No.:
Program:WAP to find area of rectangle using function(function with no argument and no return type)
Date:18 January 2017
*/
#include<stdio.h>
void area();

int main()
{
    area();
    return 0;
}
void area()
{

    int L,B,result;
    printf("Enter the length  \n");
    scanf("%d",&L);
    printf("Enter the breadth \n");
    scanf("%d",&B);
    result=L*B;
    printf("Area of rectangle  is:%d \n",result);
}
