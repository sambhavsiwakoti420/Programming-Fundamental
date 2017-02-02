/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Roll No.:
Lab Sheet No.:
Program:WAP to find sum of elements of an array containing 10 elements.
Date:01 February 2017
*/
#include<stdio.h>
int main()
{
    int n[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        printf("Enter the numbers \n ");
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++)
    sum=sum+n[i];
    printf(" sum of n[%d] is %d ",i,sum);
    return 0;
}

