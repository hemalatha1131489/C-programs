//sorted elements
#include<stdio.h>
int main()
{
int i,j,t,n,a[50];
printf("Enter the total numbers");
scanf("%d",&n);
printf("\nEnter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}}}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
