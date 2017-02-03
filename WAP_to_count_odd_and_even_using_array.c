#include<stdio.h>
int main()
{
	int another=0,i,count=0,elements[10];
	for(i=1;i<=10;i++)
	{
		printf("Enter the elements %d:",i);
		scanf("%d",&elements[i]);
	}
	for(i=1;i<=10;i++)
	{
		if(elements[i]%2==0)
		{
			count=count+1;
		}
		if(elements[i]%2==1)
		{
			another=another+1;
		}
	}
	printf("The total of even number of all the elements of an array are %d\n",count);
	printf("The total of odd number of all the elements of an array are %d\n",another);
	return 0;
}
