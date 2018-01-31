//print the digits
#include<stdio.h>
int main()
{
int num,a[50],i=0,j,rem=0;
printf("Enter the number");
  scanf("%d",&num);
  while(num!=0)
  {
    rem=num%10;
  a[i]=rem;
    num=num/10;
    i++;
  }
  printf("\nThe number is:");
  for(j=i-1;j>=0;j--)
  {
    printf("%d ",a[j]);
  }
  return 0;
}
