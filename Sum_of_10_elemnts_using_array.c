#include<stdio.h>
int main()
{
    int n[10],i,Sum=0;
    for(i=0;i<10;i++)
    {
        printf("Enter the numbers \n");
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        Sum=Sum+n[i];

    }
    printf("The sum of numbers in array is:%d \n",Sum);
    return 0;
}
