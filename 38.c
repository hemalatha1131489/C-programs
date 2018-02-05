//swap numbers by using bitwise operator
#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter the two numbers");
scanf("%d%d",&num1,&num2);
printf("\nBefore swapping the values are:%d %d",num1,num2);
num1=num1^num2;
num2=num1^num2;
num1=num1^num2;
printf("\n After swapping the values are: %d %d",num1,num2);
return 0;
}
