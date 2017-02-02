/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Roll No.:
Lab Sheet No.:
Program:WAP to find sum of elements of an array containing 10 elements.
Date:01 February 2017
*/
#include<stdio.h>
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
    int n[10],i,greater=0;
    for(i=0;i<10;i++)
    {
        printf("Enter the numbers \n ");
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        if(greater<n[i])
        {
            greater = n[i];
        }
    }
    printf(" greater is %d",greater);
    return 0;
}

