/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:
Program:WAP to create details.
Date:03 February 2017
*/
#include<stdio.h>
struct process
{
    int customer_id;
    int number_of_product_purchased;
    float total_payment;
};
int main()
{
    struct process customer;

    customer.customer_id;
    customer.number_of_product_purchased;
    customer.total_payment;


    printf("Enter the customer id \n");
    scanf("%d",&customer.customer_id);
    printf("Enter the total number of product purchased \n");
    scanf("%d",&customer.number_of_product_purchased);
    printf("Enter the total payment \n");
    scanf("%f",&customer.total_payment);


    printf("The customer id is:%d \n",customer.customer_id);
    printf("The number of purchased product is : %d \n",customer.number_of_product_purchased);
    printf("The total payment is :%f \n",customer.total_payment);


    return 0;
}
