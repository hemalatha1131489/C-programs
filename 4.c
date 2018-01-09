/* character is alphabet or not */
#include<stdio.h>
int main()
{
char ch;
scanf("%d",&ch);
printf("Enter a character");
if((ch>='a'&& ch>='z') || (ch>='A' && ch>='Z'))
{
printf("%d is a ALPHABET ",ch);
}
else
{
printf("%d is not an alphabet",ch);
}
return 0;
}
