/* largest among three numbers*/
#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("\nEnter the three numbers");
scanf("%d, %d ,%d",&num1,&num2,&num3);
printf("\nThree numbers are \t%d,\t%d,\t%d",num1,num2,num3);
if((num1>=num2)&& (num1>=num3))
printf("%d\n is largest among three numbers",num1);
if((num2>=num1)&&(num2>=num3))
printf("%d \nis the largest among three numbers",num2);
if(num3>=num1 )&& (num3>=num2))
printf("%d \nis the largest among three numbers",num3);
return 0;
}

