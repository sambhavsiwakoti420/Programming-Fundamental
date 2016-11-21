/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Roll No.:14
Lab Sheet No.:4
Program:Write a C program to print area and volume of sphere
Date:21 November 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
int main(){
float R,area,volume;
printf("Enter the radius of sphere \n");
scanf("%f",&R);
area=4*PI*pow(R,2);
printf("The area of sphere is:%f \n",area);
volume=1.33*PI*pow(R,3);
printf("The volume of sphere is:%f \n",volume);
getch();
return 0;
}
