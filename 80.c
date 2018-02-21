//print the odd number in the given number
#include<stdio.h>
int main()
{
int num,i,m;
printf("Enter the number");
scanf("%d",&num);
while(num!=0)
{
m=num%10;
if(m%2!=0)
printf("\n%d",m);
}
return 0;
}

