#include<stdio.h>
#include<string.h>
int main()
{
char a[10];
int n,i;
printf("Enter the string\n");
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(i%2==0)
printf("%c",a[i]);
}
printf(" ");
for(i=0;i<n;i++)
{
if(i%2==1)
printf("%c",a[i]);
}
return 0;
}
