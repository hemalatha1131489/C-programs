//to find nearest power of 2
#include<stdio.h>
int main()
{
int num,x=1,i,c=0;
printf("Enter the number");
scanf("%d",&num);
while(num!=1)
{
num/=2;
c++;
}
for(i=0;i<=c;i++)
{
x*=2;
}
printf("\n%d is the nearest multiple of 2",x);
return 0;
}
