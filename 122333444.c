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

    int i,j,n;
    printf("Enter the rows \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);


        }
        printf("\n");
    }

getch();
return 0;
}
