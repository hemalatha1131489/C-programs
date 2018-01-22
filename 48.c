//average of the numbers
#include<stdio.h>
int main()
{
int num,a[100],avg=0,i,N;
printf("Enter the total numbers");
scanf("%d",&N);
printf("\nEnter the numbers");
for(i=1;i<=N;i++)
{
scanf("%d",&a[i]);
printf("\t%d",a[i]);
avg=avg+a[i];
}
printf("\nThe average value is %d",avg);
return 0;
}

