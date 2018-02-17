//check whether a string is binary or not
#include<stdio.h>
int main()
{
char str[20];
int flag=0,i;
printf("Enter the string");
scanf("%s",str);
for(i=0;str[i];i++)
{
if((str[i]=='0')||(str[i]=='1'))
flag=1;
else
flag=0;
}
if(flag==1)
printf("\nYES");
else
printf("\nNO");
return 0;
}
