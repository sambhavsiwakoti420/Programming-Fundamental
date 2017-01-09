/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:15
Roll No.:
Program:WAP to check whether a character is alphabet or not using ternary operator.
Date:09 January 2017
*/
#include<stdio.h>
int main(){
	char  n;
	int ASCII;
	printf("Enter the character \n");
	scanf("%c",&n);
	ASCII=n;
	

((ASCII>=65&&ASCII<=90)||(ASCII>=97&&ASCII<=122))?printf("The character is alphabet \n"):printf("The character is not alphabet \n"); 
	return 0;
}
