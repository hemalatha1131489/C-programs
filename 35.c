//count the numeric characters
#include<stdio.h>
int main()
{
char a[100];
int count=0,i;
printf("enter the word");
scanf("%s",&a);
for(i=0;i<=100;i++)
{
if(a[i]>='0'&&a[i]<='9')
{
count++;
}
}
printf("\n Total number of numeric characters are:%d",count);
return 0;
}
