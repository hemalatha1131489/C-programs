//print the minimum element 
#include<stdio.h>
int main()
{
int i,n,min,a[100];
printf("enter the total numbers");
scanf("%d",&n);
printf("Enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("\t%d",a[i]);
}
min=a[0];
for(i=1;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("\n small element is %d",min);
return 0;
}
