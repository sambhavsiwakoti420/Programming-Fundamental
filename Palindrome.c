/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:17
Roll No.:36
Program:WAP to check whether the number is palindrome or not.
Date:16 January 2017
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int i,n,rem,rev=0,palindrome;
    printf("Enter the number \n");
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==i)
    {
        printf("The number is palindrome \n");
    }
    else
    {
        printf("The number is not palindrome \n");
    }
getch();
return 0;
}
