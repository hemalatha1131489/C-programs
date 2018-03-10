//product of terms
#include<stdio.h>
int main()
{
int num,pro,i,r,s=1;
printf("Enter the number");
scanf("%d",&num);
for(i=0;i<num;i++)
{
r=num%10;
s*=r;
num/=10;
}
printf("\n%d",s);
return 0;
}
