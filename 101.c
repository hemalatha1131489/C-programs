//print the n string 
#include<stdio.h>
#include<string.h>
int main()
{
int n,i,len;
char str[20];
printf("Enter the string");
scanf("%s",str);
printf("\nEnter the n value\n");
scanf("%d",&n);
len=strlen(str);
for(i=--len;n>0;i--,n--)
{
printf("%c",str[i]);
}
return 0;
}
