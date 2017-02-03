/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:
Roll no.:
Progrgam:WAP to find 3_3 matrix ask from user using array.
Date:03 February 2017
*/
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the first matrix \n");
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Second Matrix \n");
            printf("Enter the second matrix \n");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }
    printf("The sum of two matrices are:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
