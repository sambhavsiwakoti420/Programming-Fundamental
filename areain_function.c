/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:18
Roll No.:
Program:WAP to ask radius from user in main() method and pass it to function area and  calculate area of circle in the function and display the result.
Date:18 January 2017
*/
#include<stdio.h>
#define PI 3.14
void area();
int main()
{
    int n;
    printf("Enter the radius \n");
    scanf("%d",&n);
    area(n);
    return 0;
}
void area(int radius)
{
    float result,diameter,circumference;
result=pow(radius,2)*PI;
diameter=radius*2;
circumference=2*PI*radius;
printf("The area of circle is:%f \n",result);
printf("The diameter of circle is:%f \n",diameter);
printf("The circumference of circle is:%f \n",circumference);

}

