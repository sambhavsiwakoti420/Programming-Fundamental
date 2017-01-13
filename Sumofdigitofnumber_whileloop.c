/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:16
Roll No.:
Program:WAP to find sum of digit of any number using while loop.
Date:13 January 2017
*/
#include<stdio.h>
#include<conio.h>
int main(){
int rem,n,sum=0;
printf("Enter the number \n");
scanf("%d",&n);
while(n>0)
{
    rem=n%10;
    sum=sum+rem;
    n=n/10;
}
printf("The sum of digits of number is:%d \n",sum);

getch();
return 0;
}
