/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:20
Roll No.:
Program: WAP to ask radius of circle in main function an calculate area of circle and display the area in area function (function with argument and no return type).
Date: 25 January 2017
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void area(float a);
void main()
{
    int a;
    printf("Enter the radius");
    scanf("%d",&a);
     area(a);
}
void area(float a)
{

    float result;

    result=pow(a,2)*3.14;
    printf("Area of Circle is:%f \n",result);
}
