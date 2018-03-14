//print the kth value
#include<stdio.h>
int main()
{
int n,k,i,a[20];
printf("Enter the no.of terms");
scanf("%d",&n);
printf("\nEnter the Kth value");
scanf("%d",&k);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<=k;i++)
{
if(i==k)
{
printf("\n%d",a[i]);
break;
}}
return 0;
}
