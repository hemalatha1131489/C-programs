//print the maximum element
#include<stdio.h>
int main()
{
int a[100],n,max,i;
printf("Enter the total numbers");
scanf("%d",&n);
printf("\nEnter the numbers");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
printf("\t%d",a[i]);
}
max=a[0];
for(i=0;i<=n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\n maximum element is %d",max);
return 0;
}
