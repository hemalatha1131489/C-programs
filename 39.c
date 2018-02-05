//Maximum among ten numbers
#include<stdio.h>
int main()
{
int num,i,a[10],temp=0,j,n;
printf("Enter the numbers");
for(i=0;i<=10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
a[i]=temp;
a[j]=a[i];
a[j]=temp;
}
}}
printf("\n%d is the largest number",a[i]);
return 0;
}
