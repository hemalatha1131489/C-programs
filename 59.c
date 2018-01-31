//maximum among ten numbers
#include<stdio.h>
int main()
{
int a[10],max,i,n;
printf("Enter the total number");
scanf("%d",&n);
printf("\nEnter the numbers");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<=n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\nMaximum number is %d",max);
return 0;
}
