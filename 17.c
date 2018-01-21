//check whether a number is armstrong or not
#include<stdio.h>
int main()
{
int num,i,sum=0,rem=0;temp=0;
printf("Enter the number");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
rem=temp%10;
sum=sum+(rem*rem*rem);
temp/=10;
}
if(sum==num)
{
printf("\n%d is an Armstrong number",num);
}
else
printf("\n%d is not an Armstrong number",num);
return 0;
}
