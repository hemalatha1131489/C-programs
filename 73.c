//check a number is present in the interval
#include<stdio.h>
int main()
{
int n,f,l,i,flag=0;//f=first,l=last
printf("Enter the number");
scanf("%d",&n);//n=particular number
printf("\nEnter the limits");
scanf("%d %d",&f,&l);
for(i=f;i<=l;i++)
{
if(i==n)
{
printf("\nYES");
flag=1;
break;
}
}
if(flag==0)
printf("\nNO");
return 0;
}
