/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:
Roll No.:
Program:WAP to count odd and even number using array.
Date:03 February 2017
*/
#include<stdio.h>
int main()
{
int n[10],i,even=0,odd=0;
for(i=0;i<10;i++)
{
	printf("Enter the number \n");
	scanf("%d",&n[i]);
}
for(i=0;i<10;i++)
{
	if(n[i]%2==0)
	{
	even=even+1;
	}
	
	{
		odd=odd+1;
	}
	
}
printf("the number is even %d", even);
printf("The number is odd %d",odd);

}
	
