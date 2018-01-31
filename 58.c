//swapping using bitwise operator
#include<stdio.h>
int main()
{
int num1,num2;
printf("Before swapping the numbers are");
scanf("%d%d",&num1,&num2);
num1=num1^num2;
num2=num1^num2;
num1=num1^num2;
printf("\n After swapping numbers are  %d %d",num1,num2);
return 0;
}
