//difference is even or odd
#include<stdio.h>
int main()
{
int num1,num2,diff;
printf("Enter the numbers");
scanf("%d%d",&num1,&num2);
if(num1>num2)
diff=num1-num2;
else
diff=num2-num1;
if(diff%2==0)
printf("\n%d,%d differnce is even",num1,num2);
else
printf("\n %d,%d difference is odd",num1,num2);
return 0;
}
