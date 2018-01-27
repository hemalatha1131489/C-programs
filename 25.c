//print the median element
#include<stdio.h>
int main()
{
int i.j,mid,n,a[100];
printf("Enter the total numbers");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("%d",a[i]);
}
mid=a[0];
for(i=1;i<n;i++)
if(a[i]>mid)
{
