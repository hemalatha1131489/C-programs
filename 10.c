//count the digits
#include<stdio.h>
int main()
{
int number,i;
printf("Enter the number");
scanf("%d",&number);
for(i=0;i<number;i++)
{
number=number%10;
}
printf("\n%d Digits are present in the integer",number);
return 0;
}
