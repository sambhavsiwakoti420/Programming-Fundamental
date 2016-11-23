/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Roll No.:14
Lab Sheet No.:05
Program:Write a C program to print ASCII value of any character assigned from user.
Date:23 November 2016
*/
#include<stdio.h>
int main(){
char character;
int ASCIIvalue;
printf("Enter the character \n");
scanf("%c",&character);
ASCIIvalue=character;
printf("the value of ASCII is:%d",ASCIIvalue);
getch();
return 0;
}




