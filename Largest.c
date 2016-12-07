/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Roll No.:31
Lab Sheet No.:10
Program:WAP to print largest number.
Date:7 November 2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c;
a=60,b=60,c=25;
if(a>=b&&a>=c)
{
    printf("Largest is:%d /n",a);

}
else if(b>=a&&b>=c)
{
    printf("Largest is:%d \n",b);
}
else
{
    printf("Largest is:%d /n",c);
}



getch();
return 0;
}
