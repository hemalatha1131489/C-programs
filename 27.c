//check given string is numeric
#include<stdio.h>
int main()
{
char a[10],i,flag=0;
printf("Enter the string");
scanf("%s",&a);
for(i=0;a[i];i++)
{
if((a[i]>='0')&&(a[i]<='9'))
flag=1;
}
if(flag==1)
printf("\nYES");
else
printf("\nNO");
return 0;
}
