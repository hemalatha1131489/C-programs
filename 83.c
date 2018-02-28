#include<stdio.h>
int main()
{
int i,a[10],b[10],c[10],n;
char s;
printf("Enter the no.of times");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d%s%d",&a[i],&s,&b[i]);
if(s=='/')
c[i]=a[i]/b[i];
if(s=='%')
c[i]=a[i]%b[i];
for(i=0;i<n;i++)
printf("\n%d",c[i]);
return 0;
}
