//compare the string without using function
#include<stdio.h>
int main()
{
char str1[20],str2[20];
int temp,i;
printf("Enter the strings");
scanf("%s %s",&str1,&str2);
for(i=0;str1[i]!='\0';i++)
{
if(str1[i]==str2[i])
temp=1;
else
temp=0;
}
if(temp==1)
{
printf("\n both strings are same");
printf("\n%s",str1);
}
else if(str1>str2)
  printf("\n larger string is %s",str1);
  else
    printf("%s",str2);
return 0;
}
