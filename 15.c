//Even number betwen two intervals
#include<stdio.h>
int main()
{
int i,firstnumber,lastnumber,count=0;
printf("\nEnter the first number");
scanf("%d",&firstnumber);
printf("\nEnter the last number");
scanf("%d",&lastnumber);
for(i=firstnumber+1;i<lastnumber;i++)
{
count=i%2;
  if(count==0)
{
printf("\n%d",i);
}
}
return 0;
}
