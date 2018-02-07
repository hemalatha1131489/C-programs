//swapping of two numbers
#include<stdio.h>
int main()
{
 int num1,num2,temp;
 printf("Before swapping the values are:");
 scanf("%d%d",&num1,&num2);
 printf("%d %d",num1,num2);
 temp=num1;
 num1=num2;
 num2=temp;
 printf("\nAfter swapping the values are: %d %d",num1,num2);
 return 0;
 }
 
