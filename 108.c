//sum of AP series
#include<stdio.h>
int main()
{
int a,b,tn,c;
printf("Enter the 1st value");
scanf("%d",&a);
printf("\nEnter the difference");
scanf("%d",&b);
printf("Enter the total values");
scanf("%d",&c);
tn=c*(2*a+(c-1)*b)/2;
printf("\nSum value is %d",tn);
return 0;
}
