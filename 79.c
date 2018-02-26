#include<stdio.h>
int main()
{
int num1,num2,mul,i,flag=0;
printf("Enter the numbers");
scanf("%d %d",&num1,&num2);
mul=num1*num2;
for(i=1;i<mul;i++)
{
if(mul==i*i)
{
flag=1;
printf("\nYES");
break;
}
}
if(flag==0)
printf("\nNO");
return 0;
}
