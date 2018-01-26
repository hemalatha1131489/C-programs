//arithmetic progression
#include<stdio.h>
int main()
{
int a,n,d,sum;
printf("Enter the first number:");
scanf("%d",&a);
printf("\nEnter the total numbers:");
scanf("%d",&n);
printf("\nEnter the difference:");
scanf("%d",&d);
sum=n*((2*a+(n-1)*d))/2;
return 0;
}
