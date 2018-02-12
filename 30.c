//time format
#include<stdio.h>
int main()
{
int hr,hr1,hr2,t1,t2,t3,min1,min,min2;
printf("Enter the 1st hour and time:");
scanf("%d %d",&hr1,&min1);
printf("\nEnter the second hour and min:");
scanf("%d %d",&hr2,&min2);
t1=(hr1*60)+min1;
t2=(hr2*60)+min2;
if(t1>t2)
t3=t1-t2;
else
t3=t2-t1;
hr=t3/60;
min=t3%60;
printf("\nDifference of two times are %d hour %d mins:",hr,min);
return 0;
}
