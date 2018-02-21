//check whether a string has avowel or not
#include<stdio.h>
int main()
{
char a[20],flag=0,i;
printf("Enter the string");
scanf("%s",a);
for(i=0;;i++)
{
if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
{
flag=1;
break;
}}
if(flag==1)
printf("\nYES");
else
printf("\nNO");
return 0;
}
