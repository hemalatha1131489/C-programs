//power function
#include<stdio.h>
int main()
{
int num,k,ans=1,i;
printf("Enter the number");
scanf("%d%d",&num,&k);
for(i=0;i<k;i++)
{
ans=ans*num;
}
printf("\n%d",ans);
return 0;
}
