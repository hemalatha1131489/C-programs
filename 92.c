//sum of numbers
#include<stdio.h>
int main()
{
int n,m,i,a[20],sum=0;
printf("Enter the no.of terms");
scanf("%d",&n);
printf("Enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum+=a[i];
}
printf("\n%d",sum);
return 0;
}
