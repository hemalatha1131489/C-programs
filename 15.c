//Even number betwen two intervals
#include<stdio.h>
int main()
{
int i,firstnumber,lastnumber,count=0;
printf("\nEnter the first number");
scanf("%d",&firstnumber);
printf("\nEnter the last number");
scanf("%d",&lastnumber);
for(i=1;i<=lastnumber;i++)
{
if(count%2==0)
{
count++;
printf("%d",count);
}
}
return 0;
}
