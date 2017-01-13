/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:16
Roll No.:
Program:WAP to print the number in it's reverse order using for loop.
Date:13 January 2017
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int i,n,rem,reverse=0;
    printf("Enter the number \n");
    scanf("%d",&n);
    i=n;
    for(i=1;n>0;i++)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
printf("The number in reverse order is:%d \n",reverse);

getch();
return 0;
}
