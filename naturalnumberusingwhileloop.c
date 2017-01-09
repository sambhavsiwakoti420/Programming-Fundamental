/*
Student Name:Sambhav siwakoti
Subject:Programming Fundamental
Lab Sheet No.:
Roll No.:
Program:WAP to print all natural number from 1 to n using while loop.
Date:09 January 2017
*/
#include<stdio.h>
#include<conio.h>
int main(){
int i=1,n;
printf("Enter the number \n");
scanf("%d",&n);
while(i<=n)
{
    printf("%d\n",i);
    i++;
}
getch();
return 0;
}
