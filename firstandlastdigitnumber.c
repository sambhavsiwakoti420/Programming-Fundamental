/*
Student Name:Sambhav siwakoti
Subject:Programming Fundamental
Lab Sheet No.:
Roll No.:
Program:WAP to find first and last digit of of four digit number.
Date:11 January 2017
*/
#include<stdio.h>
int main(){
	int i,n=0,last;
printf("Enter the number \n");
scanf("%d",&n);
last=n%10;
printf("Last digit is:%d\n",last);
i=n;
for(i=1;i<n;i++)
{
	n=n/10;

}
printf("First digit is:%d\n",n);
	
	
		
return 0;
}
