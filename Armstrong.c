/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:17
Roll No.:36
Program:WAP to print armstrong number.
Date:16 January 2017
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){

  int n,rem,armstrong=0;
  printf("Enter the number \n");
  scanf("%d",&n);
  while(n>0)
  {
      rem=n%10;
      armstrong=pow(rem,3)+armstrong;
      n=n/10;
  }
        printf("The armstrong is:%d \n",armstrong);
getch();
return 0;
}
