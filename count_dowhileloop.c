#include<stdio.h>
#include<conio.h>
int main(){
    int n,rem,count=0;
    printf("Enter the number \n");
    scanf("%d",&n);
   do
    {
    rem=n%10;
   count++;
   n=n/10;
   }
   while(n>0);
    printf("The number of digits are:%d \n",count);
getch();
return 0;
}
