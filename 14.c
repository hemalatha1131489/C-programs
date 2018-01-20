//odd numbers between two intervals
#include<stdio.h>
int main()
{
int i,firstnumber,lastnumber,temp=0;
printf("\nEnter the first number");
scanf("%d",&firstnumber);
printf("\nEnter the second number");
scanf("%d",&lastnumber);
for(i=firstnumber;i<=lastnumber;i++)
{
temp=i%2;
if(temp!=0)
{
printf("\n%d",i);
}
}
return 0;
}
