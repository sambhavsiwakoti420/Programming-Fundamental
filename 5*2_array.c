/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:
Roll No.:
Program:WAP to declare and print multidimensonal array.
														3.) 5*2
Date:03 February 2017
*/
#include<stdio.h>
int main()
{
	int array[5][2]={{1,2},{2,3},{4,5},{5,6},{8,9}},i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d \t",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
