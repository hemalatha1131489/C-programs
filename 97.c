//print in reverse
#include<stdio.h>
int main()
{
int num,rev,i;
printf("Enter the number\n");
scanf("%d",&num);
while(num!=0)
{
rev=num%10;
num/=10;
printf("%d",rev);
}
return 0;
}
