//check whether a number is odd or not
#include<stdio.h>
int main()
{
int n,m,add=0;
printf("Enter the two numbers");
scanf("%d %d",&n,&m);
add=n+m;
if(add%2==0)
printf("\nEVEN");
else
printf("\nODD");
return 0;
}
