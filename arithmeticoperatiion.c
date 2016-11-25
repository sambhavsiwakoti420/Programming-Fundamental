/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
ROll No.:14
Lab Sheet No.:05
Program:Write a C program to print arithmetic operation.
Date:25 November 2016
*/
#include<stdio.h>
#include<conio.h>
int main (){
    int a,b,addition,subtraction,multiplication,division,modulus;
    printf("Enter the first number \n");
    scanf("%d",&a);
    printf("Enter the second number \n");
    scanf("%d",&b);
    addition=a+b;
    subtraction=a-b;


 multiplication=a*b;
 division=a/b;
    modulus=a%b;
    printf("The sum of two numbers is:%d \n",addition);
    printf("The difference of two numbers is:%d \n",subtraction);
    printf("The division of two numbers is :%d \n",division);
    printf("The multiplication of two numbers is:%d \n",multiplication);
    printf("The modulus of two numbers is:%d \n",modulus);










getch();
return 0;
}
