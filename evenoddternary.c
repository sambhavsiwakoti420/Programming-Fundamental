/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:15
Roll No.:
Program:WAP to check whether a number is even or odd using ternary operator.
Date:09 January 2017
*/
#include<stdio.h>
int main(){
	int n;
	printf("Enter the number \n");
	scanf("%d",&n);
	
	(n%2==0)?printf("The number is even \n"):printf("The number is odd \n");
	
	return 0;
}
