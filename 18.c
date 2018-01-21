//Armstrong number between two intervals
#include<stdio.h>
#include<math.h>
int main()
{
int temp1,temp2,firstnumber,lastnumber,i,n,rem=0,sum=0;
printf("Enter the limits");
scanf("%d%d",&firstnumber,&lastnumber);
for(i=firstnumber+1;i<lastnumber;i++)
{
temp1=i;
temp2=i;
while(temp1!=0)
{
temp1/=10;
++n;
}
while(temp2!=0)
{
rem=temp2%10;
sum+=pow(rem,n);
temp2/=10;
}
if(sum==i)
{
printf("\n%d",i);
}
n=0;
sum=0;
}
return 0;
}
