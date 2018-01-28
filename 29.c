//print in hrs and mins
#include<stdio.h>
int main()
{
int n,a,b;
printf("Enter the time");
scanf("%d",&n);
a=n/60;
b=n%60;
printf("\n%d hour %d minutes",a,b);
return 0;
}
