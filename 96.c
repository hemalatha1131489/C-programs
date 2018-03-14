//to check a number is composite
#include<stdio.h>
int main()
{
int n,i,flag=0;
printf("Enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
printf("\nYes");
flag=1;
break;
}}
if(flag==0)
printf("\nNO");
return 0;
}
