//print the string
#include<stdio.h>
#include<string.h>
int main()
{
int num,i;
char a[50];
printf("Enter the string with number");
scanf("\n%s%d",&a,&num);
printf("\n%s%d",a,num);
for(i=1;i<=num;i++)
{
printf("\n%s",a);
}
return 0;
}
