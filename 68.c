//to find whether a number is multible of 7
#include<stdio.h>
int main()
{
int num;
printf("Enter the number");
scanf("%d",&num);
if(num%7==0)
printf("\n Yes.%d is a multiple of 7",num);
else
printf("\n%d is not a multiple of 7",num);
return 0;
}
