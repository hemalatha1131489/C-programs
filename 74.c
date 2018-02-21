//Round the decimal number to integer
#include<stdio.h>
int main()
{
float num,d;//d=difference
int i;//i=integer
printf("Enter the number");
scanf("%f",&num);
i=num;
d=num-i;
if(d>=0.5)
i+=1;
else
i+=0;
printf("\nThe nearest integer value is %d",i);
return 0;
}

