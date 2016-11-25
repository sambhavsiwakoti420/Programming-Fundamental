/*
Student Name:Sambhav Siwaakoti
Subject:Programming Fundamental
Roll No.:14
Lab Sheet No.:06
Program:Write a C program to calculate compound interest
Date:24 November 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
     {

float P,T,R,CI;
printf("Enter the Principle \n");
scanf("%f",&P);

printf("Enter the Time \n");
scanf("%f",&T);

printf("Enter the Rate \n");
scanf("%f",&R);

CI=(P*pow(1+(R/100),T)-1);

printf("The compound interest is:%f \n",CI);

getch();
return 0;
     }
