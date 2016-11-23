/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Roll No.:14
Lab Sheet No.:05
Program:Write a C program to find roots of quadratic equation and value are assigned from user.
Date:23 November 2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
    float x1,x2,a,b,c,dis;
    printf("Enter the value of a \n");
    scanf("%f",&a);
    printf("Enter the value of b \n");
    scanf("%f",&b);
    printf("Enter the value of c \n");
    scanf("%f",&c);
   dis=(b*b)-(4*a*c);
   x1=(-b)+(b*b)-(4*a*c)/2*a;
   x2=(-b)-(b*b)-(4*a*c)/2*a;
   printf("The first root is:%f \n",x1);
   printf("The second root is:%f \n",x2);


getch();
return 0;
}
