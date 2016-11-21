/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Roll No.:14
Lab Sheet No.:4
Program:Write a C program to print area and perimeter of rectangle
Date:21 November 2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
float l,b,area,perimeter;
printf("Enter the length of rectangle \n");
scanf("%f",&l);
printf("Enter the breadth of rectangle \n");
scanf("%f",&b);
area=l*b;
printf("The area of rectangle is:%f \n",area);

perimeter=2*(l+b);
printf("The perimeter of rectangle is:%f \n",perimeter);

getch();
return 0;
}
