//check whether number is palindrome or not
#include<stdio.h>
int main()
{
int num,ans=0;
printf("\nEnter the number");
scanf("%d",&num);
while(num!=0)
{
ans=((ans*10)+(num%10));
num/=10;
}
if(ans==num)
{
printf("\nYes %d is a palindrome",num);
}
else
{
printf("\nNO %d is not a palindrome",num);
}
return 0;
}
