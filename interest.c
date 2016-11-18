/*
Student Name:Sambhav SiwakotiS
Subject: Programmimg Fundamental
Roll No: 14
Program: Write a C program to print simple interest
Date: 18 nov 2016
*/
#include <stdio.h>
#include <conio.h>
int main (){
    float p, t, r, interest;
    printf ("Enter the first no.\n");
    scanf ("%f",&p);
    printf("Enter the second no.\n");
    scanf("%f",&t);
    printf("Enter the third no.\n");
    scanf("%f",&r);
    interest=p*t*r/100;
    printf("The interest is:%f",interest);
getch ();
return 0;
}
