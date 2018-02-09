//count the space
#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int count=0,i,l;
printf("Enter the string");
scanf("%[^\n]s",&a);
  l=strlen(a);
for(i=0;i<l;i++)
if(a[i]==' ')
count++;
printf("\nspace count is:%d",count);
return 0;
}
