//print th index of the number
#include<stdio.h>
int main()
{
int N,a[10],i;
printf("Enter the total numbers:");
scanf("%d",&N);
for(i=0;i<N;i++)
{
scanf("\n%d",&a[i]);
printf("\n%d %d",a[i],i);
}
return 0;
}
