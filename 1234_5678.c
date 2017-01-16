/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:17
Roll No.:36
Program:WAP to display 1
                       2 2
                       3 3 3
                       4 4 4 4
                       5 5 5 5 5
Date:16 January 2017
*/
#include<stdio.h>
#include<conio.h>
int main(){

  int i,j,c=1;


    for(i=1;i<=2;i++)
    {
        for(j=1;j<=4;j++)
        {
            printf("%d",c);
            c++;

        }
        printf("\n");
    }

getch();
return 0;
}
