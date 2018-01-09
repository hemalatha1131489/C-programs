#include<stdio.h>
int main()
{
int number;
scanf("%d",&number);
printf("Enter the number");
if(number==0)
printf("zero");
elseif(number<0)
printf("negative");
else
printf("positive");
return 0;
}
