/*to check whether a character is vowerl or consonant*/
#include<stdio.h>
int main()
{
char chr;
scanf("%c",&chr);
printf("Enter the character");
if((chr>='a'&& chr<='z') || (chr>='A'&& chr<='Z'))
{
if(chr=='a'||chr=='A'||chr=='e'||chr=='E'||chr=='i'||chr=='I'||chr=='o'||chr=='O'||chr=='u'||chr=='U')
{
printf("%c\n is a vowel\t",chr);
}
else
{
printf("%c\n is a consonant\t",chr);
}
}
else
{
printf("%c is neither vowel nor a consonant\t",chr);
}
return 0;
}
