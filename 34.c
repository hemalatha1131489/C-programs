//count the no.of lines in a paragraph
#include<stdio.h>
int main()
{
char a[100];
int count=0,i;
printf("Enter the paragraph");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]='.');
{
count++;
}}
printf("\n total lines are:%d",count);
return 0;
}
