/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:
Roll No.:
Program:WAP to declare and print multidimensonal array.
														2.) 3*3
Date:03 February 2017
*/
#include<stdio.h>
int main()
{
	int array[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the number \n");
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
