//sum of natural numbers
#include<stdio.h>
int main()
{
int i,N,sum=0;
scanf("%d",&N);
printf("%d",N);
for(i=0;i<N;i++)
{
sum=sum+i;
}
printf("%d",sum);
return 0;
}
