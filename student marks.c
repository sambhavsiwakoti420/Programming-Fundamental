/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Roll No.:14
Lab Sheet No.:07
Program:Write a C program to print students's marks.
Date:28 November 2016
*/
#include<stdio.h>
#include<conio.h>
int main()

{
   float CA,DS,IS,AL,OM,PF,Sum,percentage;



printf("Enter the marks of Computer architure\n");
scanf("%f",&CA);
printf("Enter the marks of Discrete structure\n");
scanf("%f",&DS);
printf("Enter the marks of interactive skills\n");
scanf("%f",&IS);
printf("Enter the marks of Algebra\n");
scanf("%f",&AL);

printf("Enter the marks of organization management\n");
scanf("%f",&OM);
printf("Enter the marks of Programming fundamental\n");
scanf("%f",PF);
   Sum=CA+DS+IS+AL+OM+PF;

printf("Total Marks %f\n",Sum);

percentage=(Sum/600)*100;


printf("Your percentage is: %f ", percentage);

getch();
return 0;


}
