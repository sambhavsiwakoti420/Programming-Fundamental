#include<stdio.h>
#include<conio.h>
int main(){
    int n,rem,count;
    printf("Enter the number \n");
    scanf("%d",&n);

   for(count=0;n>0;count++)
   {
       rem=n%10;
       n=n/10;
   }
    printf("The number of digits are:%d \n",count);
getch();
return 0;
}
