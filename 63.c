//count the no.of words
#include<stdio.h>
int main()
{
char str[30];
int count=0,i;
printf("Enter the string");
scanf("%[^\n]s",str);
for(i=0;str[i];i++)
{
if(str[i]==' ')
count++;
}
printf("\nNo of words in the string is: %d:",count+1);
return 0;
}
