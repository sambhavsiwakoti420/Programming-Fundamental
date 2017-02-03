/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:
Roll no.:
Progrgam:WAP to find 2*2 matrix ask from user using array.
Date:03 February 2017
*/
#include<stdio.h>
int main()
{
    int i,j;
    int a[i][j],b[i][j],sum[i][j];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the first matrix \n");
            scanf("%d",&a[i][j]);
        }
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("Enter the second matrix \n");
                scanf("%d",&b[i][j]);
            }
            for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                {
                    sum[i][j]=a[i][j]+b[i][j];

                }
                printf("The sum is :%d \n",sum[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
}
