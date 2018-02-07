//count the space
#include<stdio.h>
int main()
{
char a[100];
int count=0,i;
printf("Enter the string");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=' ')
{
count++;
}}
printf("space count is:%d",count);
return 0;
}
