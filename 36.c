//count the special characters
#include<stdio.h>
int main()
{
char c[100];
int count=0,i;
printf("Enter the word");
scanf("%s",&c);
for(i=0;c[i];i++)
{
if(ispunct(c[i]))
{
count++;
}}
printf("\n%d",count);
return 0;
}
