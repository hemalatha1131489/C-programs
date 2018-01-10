
// leap year or not
#include<stdio.h>
int main()
{
int year;
printf("\nEnter the year");
scanf("%d",&year);
if(year%4==0)
printf("%d \nis a Leap year",year);
else
printf("\nIt is not a leap year");
return 0;
}
