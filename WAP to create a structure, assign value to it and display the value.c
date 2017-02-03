/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:
Roll No.:
Program:WAP to create a structure, assign value to it and display the value.
Date:03 February 2017
*/
#include<stdio.h>
struct student
{
	int student_id;
	int registration_number;
	float fee;
};
int main()
{
	struct student sambhav,biraj;
	sambhav.student_id=101;
	sambhav.registration_number=1005;
	sambhav.fee=100000.5;
	
	biraj.student_id=102;
	biraj.registration_number=1000005;
	biraj.fee=11234545.5;
	
	
	
	
	
	printf("sambhav id = %d \n",sambhav.student_id);
	
	printf("sambhav registration id = %d \n",sambhav.registration_number);
	
	printf("sambhav fee = %f \n",sambhav.fee);
	
	
	
	
	printf("Biraj id = %d \n",biraj.student_id);
	
	printf("Biraj registration id = %d \n",biraj.registration_number);
	
	printf("Biraj fee = %f \n",biraj.fee);
	
	
	return 0;
}
