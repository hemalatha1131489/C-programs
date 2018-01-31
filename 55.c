//print the number if it is even
#include<stdio.h>
int main()
{
int N,M,product=0;
printf("Enter the two numbers");
scanf("%d%d",&N,&M);
product=N*M;
if(product%2==0)
printf("\nEVEN");
else
printf("ODD");
return 0;
}
