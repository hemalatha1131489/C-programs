//factorial of a number
#include<stdio.h>
int main()
{
int num,i,fact=1;
printf("Enter the number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
fact=fact*i;
}
printf("\n%d is a required answer",fact);
return 0;
}
