#include<stdio.h>
int main()
{
int a,b,c,s;
printf("Enter the numbers");
scanf("%d%d%d",&a,&b,&c);
s=(a*b)%c;
printf("\nAns is %d",s);
return 0;
}
