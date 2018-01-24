//print the sum of digits
#include<stdio.h>
int main()
{
int num,sum=0,digit=0,i;
printf("Enter the number");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
sum+=digit;
num/=10;
}
printf("\nsum of digits are %d",sum);
return 0;
}
