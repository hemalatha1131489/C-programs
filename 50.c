//check the number is power of 2
#include<stdio.h>
int main()
{
int num;
printf("Enter the number");
scanf("%d",&num);
while(num!=1)
{
if(num%2!=0)
{
num/=2;
}
printf("\nYES");
}
else
printf("\n%d is not a power of 2",num);
return 0;
}
