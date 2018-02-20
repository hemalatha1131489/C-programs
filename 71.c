//check the string si palindrome or not
#include<stdio.h>
int main()
{
char str[20];
int i,j,flag=0;
printf("Enter the string");
scanf("%s",str);
i=0;
j=strlen(str)-1;
while(j>1)
{
if(str[i++]!=str[j--])
{
flag=1;
break;
}
}
if(flag==1)
printf("\nNO");
else
printf("\nYES");
return 0;
}
