//print hello n times
#include<stdio.h>
int main()
{
int n,i;
char a[10]="Hello";
scanf("%d",&n);//number of times 
printf("%d",n);
for(i=0;i<n;i++)
{
printf("\n%s",a);
}
return 0;
}

