//count the no.of  character without the space
#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int count=0,i,l;
printf("Enter the string");
scanf("%[^\n]s",&str);
l=strlen(str);
for(i=0;i<l;i++)
{
if(str[i]!=' ')
count++;
}
printf("\n Total characters are:%d",count);
return 0;
}
