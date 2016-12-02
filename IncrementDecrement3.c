/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Roll No.:
Lab Sheet No:09
Program:WAP to demonstration the working of increment decrement operators.
Date:2 December 2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a;
printf("Enter the number \n");
scanf("%d",&a);


printf("Postincrement of number is:%d \n",a++);
printf("Preincrement of number is:%d \n",++a);
printf("Postdecrement of number is:%d \n",a--);
printf("Predecrement of number is:%d \n",--a);

getch();
return 0;
}
