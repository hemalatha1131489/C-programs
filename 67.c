//find the greater multiple of 10
#include<stdio.h>
int main()
{
int num,s,r,q;
printf("Enter the number");
scanf("%d",&num);
q=num/10;
r=num%10;
s=q*10;
if(r!=0)
s+=10;
printf("\n%d is the greater multiple of %d",s,num);
return 0;
}

