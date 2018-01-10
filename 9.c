#include<stdio.h>
int main()
{
int a[100],k,i,n;
scanf("%d%d",&n,&k);
printf("%d",n,k);
for(i=0;i<=n;i++)
{
printf("\n%d",&a[i]);
}
for(i=0;i<=k;i++)
{
k=k+i;
}
printf("%d",k);
return 0;
}
