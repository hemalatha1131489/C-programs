//swap two numbers
#include<stdio.h>
int main()
{
int num1,num2,temp=0;
printf("Enter the numbers");
scanf("%d%d",&num1,num2);
printf("\n%d%d",num1,num2);
if((num1!=0)&&(num2!=0))
{
temp=num1;
num1=num2;
num2=temp;
}
printf("%d%d",num1,num2);
return 0;
}

