//factors of a number
#include<stdio.h>
int main()
{
int num;
printf("Enter the number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
printf("\n%d",i);
}
return 0;
}
