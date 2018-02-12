//print the median element
#include<stdio.h>
int main()
{
int a[50],i,j,n,t;
printf("Enter the total numbers");
scanf("%d",&n);
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
}
}}
printf("\nsorted array is:");
for(i=0;i<n;i++)
{
printf("\n\t%d",a[i]);
}
printf("\n median element is:%d",a[n/2]);
return 0;
}
