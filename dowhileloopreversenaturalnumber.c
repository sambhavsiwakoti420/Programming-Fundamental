/*
Student Name:Sambhav siwakoti
Subject:Programming Fundamental
Lab Sheet No.:
Roll No.:
Program:WAP to print all natural number from n to 1(reverse) using  do while loop.
Date:09 January 2017
*/
#include<stdio.h>
#include<conio.h>
int main(){
int i=0,n;
printf("Enter the number \n");
scanf("%d",&n);
i=n;
do
{
printf("%d\n",i);
i--;
}
while(i>=1);


getch();
return 0;
}
