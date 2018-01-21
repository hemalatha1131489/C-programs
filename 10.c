//count the digits
#include<stdio.h>
int main()
{
int number,count=0;
printf("Enter the number");
scanf("%d",&number);
while(number!=0)
{
number=number/10;
  count++;
}
printf("\n%d Digits are present in the integer",count);
return 0;
}
