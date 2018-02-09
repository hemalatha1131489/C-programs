//count the no.of words in a line
#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int count=0,l,i;
printf("Enter the string");
scanf("%[^\n]s",&str);
l=strlen(str);
for(i=0;i<=l;i++)
{
if(str[i]==' ')
count++;
}
printf("\nNo of words in a line is:%d",count+1);
return 0;
}
