//check whther it contain both alphabet and numeric
#include<stdio.h>
int main()
{
char a[20];
int ,b=0,i,c=0;
printf("Enter the word with number");
for(i=0;i<=20;i++)
{
scanf("%s",&a[i]);
}
for(i=0;i<=20;i++)
{
if((a[i]>='a'||a[i]>='A')&&(a[i]<='z'||a[i]<='Z'));
{
c++:
}
  if(a[i]>='0'&&a[i]<='9')
  {
  b++;
  }
 }
 if(b>0&&c>0)
  {
  printf("\n It contains both alphabets and numbers");
  }
else
printf("\n it doesn't have alphabet and numberic");

return 0;
}
