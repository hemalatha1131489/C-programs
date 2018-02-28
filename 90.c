//print the numbers in the string
#include<stdio.h>
int main()
{
char str[20],i;
printf("Enter the alphanumeric string");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='0'||str[i]<='9')
printf("\n%d",str[i]);
}
return 0;
}
