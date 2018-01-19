//power of the number
#include<stdio.h>
int main()
{
int Base,Exponent,ans=1;
printf("\nEnter the Base");
scanf("%d",&Base);
printf("\nEnter the Exponent");
scanf("%d",&Exponent);
while(Exponent!=0)
{
ans*=Base;
--Exponent;
}
printf("\n %d ",ans);
return 0;
}
