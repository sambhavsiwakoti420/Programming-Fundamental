#include<stdio.h>
long fact(int n);
main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("Factorial of %d is %ld \n",n,fact(n));

}
long fact(int n)
{
    if(n==0)
        return 1;
    else
        return (n*fact(n-1));
}
