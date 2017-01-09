/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:15
Roll No.:
Program:WAP to check whether year is leap year or not using ternary operator.
Date:09 January 2017
*/
#include<stdio.h>
int main(){
	int year;
	printf("Enter the year \n");
	scanf("%d",&year);
	(year%4==0)?printf("The year is leap year\n"):printf("The year is not leap year\n");
	
	
	return  0;
	
}
