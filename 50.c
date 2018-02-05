//check the number is power of 2
#include<stdio.h>
int main()
{
int num,a;
printf("Enter the number");
  scanf("%d",&num);
 a=(num&(num-1));
  if(a==0)
    printf("\nYes");
    else
      printf("\nNo");
    return 0;
  }
  
