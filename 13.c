//check whether a number is prime or not
#include<stdio.h>
int main()
{
int num,i;
printf("Enter the number");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%2==0)
{
printf("\nYES");
break;
}
else
{
printf("\nNO");
break;
}
}
return 0;
}
