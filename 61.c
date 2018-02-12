//print the ist n string
#include<stdio.h>
int main()
{
int k,i;
char s[10];
printf("Enter the string with number\n");
scanf("%s %d",s,&k);
for(i=0;i<k;i++)
{
printf("%c",s[i]);
}
return 0;
}
