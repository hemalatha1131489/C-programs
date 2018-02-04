//find the lowest and highest number
#include<stdio.h>
int main()
{
int num=0,i,n,a[100],large,small;
printf("Enter the total number");
scanf("%d",&n);
printf("\nEnter the numbers");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
large=small=a[0];
if(a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
printf("\n%d is the largest number",large);
printf("\n%d is the smallest number",small);
return 0;
}

