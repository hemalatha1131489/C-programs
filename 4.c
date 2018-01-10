/* character is alphabet or not */
#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
printf("Enter a character");
if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
{
printf("%c is a ALPHABET \t",ch);
}
else
{
printf("%c is not an alphabet\t",ch);
}
return 0;
}
