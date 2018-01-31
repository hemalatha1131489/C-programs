//fibonacci  series
#include<stdio.h>
int main()
{
int a=0,b=1,temp,i,n;
printf("Enter the total number");
scanf("%d",&n);
printf("\n Fibonacci series is: ");
for(i=1;i<=n;++i)
{
printf("%d ",a);
temp=a+b;
a=b;
b=temp;
}
return 0;
}

