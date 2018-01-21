//First five multiples of of a number
#include<stdio.h>
int main()
{
int num,i,ans;
printf("\nEnter the number");
scanf("%d",&num);
for(i=1;i<=5;i++)
{
ans=i*num;
printf("\n%d",ans);
}
return 0;
}
