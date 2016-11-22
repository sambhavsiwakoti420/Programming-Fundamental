/*
Student Name: Sambhav Siwakoti
Subject:Programming Fundamental
Roll No.:14
Lab Sheet No.: 4
Program:Write a C program to print the area of triangle?
Date:21 nov 2016
*/
#include <stdio.h>
#include<conio.h>
#include <math.h>
int main(){
int a, b, c;float d, s, area;
printf("Enter the first side of triangle\n");
scanf("%f",&a);
printf("Enter the second side of triangle\n");
scanf("%f",&b);
printf("Enter the third side of triangle\n");
scanf("%f",&c);
s=a+b+c/2;
d=s*(s-a)*(s-b)*(s-c);
area=pow(d, 0.5);
printf("The area of triangle is:%f",area);
getch();
return 0;
}
