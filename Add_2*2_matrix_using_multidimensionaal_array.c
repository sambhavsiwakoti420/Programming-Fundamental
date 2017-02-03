/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:
Roll No.:
Program:WAP to add 2*2 ask from user using multidimensonal array ask from user
														 
Date:03 February 2017
*/
#include<stdio.h>
int main()
{
int a[3][3],b[3][3],c[3][3],i,j;
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("Enter the number \n");
		scanf("%d",&a[i][j]);
	}
	printf("%d \t",a[i][j]);
}
printf("\n");
}

for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("Enter the number \n");
		scanf("%d",&b[i][j]);
	}
	printf("%d \t",b[i][j]);
}
printf("\n");
}
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		c[i][j]=a[i][j]+b[i][j]
	}
	printf("%d \t",c[i][j]);
}
printf("\n");
}
returnj 0;
}
