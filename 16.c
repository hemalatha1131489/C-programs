//prime numbers between two intervals
#include<stdio.h>
int main()
{
int firstnumber,lastnumber,i,j,count;
printf("\nEnter the first number");
scanf("%d",&firstnumber);
printf("\nEnter the last number");
scanf("%d",&lastnumber);
for(i=firstnumber;i<=lastnumber;++i)
{
count=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
count++;
break;
}
}
if(count==0)
{
printf("\n%d",i);
}
}
return 0;
}
