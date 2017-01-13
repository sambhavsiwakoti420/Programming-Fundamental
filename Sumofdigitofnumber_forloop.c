/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:16
Roll No.:
Program:WAP to find sum of digit of any number using for loop.
Date:13 January 2017
*/
#include<stdio.h>
#include<conio.h>
int main(){
int n,sum=0,rem,i;
printf("Enter the number \n");
scanf("%d",&n);
i=n;
for(i=1;n>0;i++)
{
    rem=n%10;
    sum=sum+rem;
    n=n/10;
}
printf("The sum of digits of number is:%d \n",sum);
getch();
return 0;
}
