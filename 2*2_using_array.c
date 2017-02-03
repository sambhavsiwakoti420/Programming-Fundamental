/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:
Roll No.:
Program:WAP to declare and print multidimensonal array.
														1.) 2*2
Date:03 February 2017
*/
#include<stdio.h>
int main()
{
int array[2][2]={{1,2},{3,4}};
int i,j;
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%d \t",array[i][j]);
	}
	printf("\n");
}
return 0;
} 
