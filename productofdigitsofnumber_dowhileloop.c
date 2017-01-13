/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:16
Roll No.:
Program:WAP to calculate product of digit of any number using do while loop.
Date:13 January 2017
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int n,rem,product=1;
    printf("Enter the number \n");
    scanf("%d",&n);
    do
    {
        rem=n%10;
        product=product*rem;
        n=n/10;
    }
    while(n>0);

    printf("The product of digits of number is:%d \n",product);
getch();
return 0;
}
