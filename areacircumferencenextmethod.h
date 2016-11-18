/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Roll No.:
Lab Sheet NO.:3
Program:Write a C program to calculate the area and circumference of circle having radius,radius should be taken
Date:18 November 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
int main(){
float r,area,circumference;
printf("Enter the value of r \n");
scanf("%f",&r);
area=PI*pow(r,2);
printf("The area of circle is:%f \n",area);
circumference=2*PI*r;
printf("The circumference of circle is:%f \n",circumference);

getch();
return 0;
}
