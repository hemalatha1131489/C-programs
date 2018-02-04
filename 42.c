//compare the string without using function
#include<stdio.h>
int main()
{
char str1[20],str2[20];
int temp,i;
printf("Enter the strings");
scanf("%c %c",&str1,&str2);
for(i=0;str[i]='\0';i++)
{
if(str1[i]==str2[i])
temp=1;
else
temp=0;
}
if(temp==1)
{
printf("\n both strings are same");
printf("\n%d",str1);
}
else
printf("\nstrings are not equal");
return 0;
}
