//To find changed number
#include<stdio.h>
int main()
{
int i,j,n,a[100];
printf("Enter the no.of terms");
scanf("%d",&n);
printf("\nEnter the numbers");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
if(a[i]!=i)
{
printf("\n%d",i);
break;
}
}
return 0;
}
