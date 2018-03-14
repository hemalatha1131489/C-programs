//cuboid area and volume
#include<stdio.h>
int main()
{
int l,b,h,area,volume;
printf("Enter the parameters L,B,H respectively");
scanf("%d%d%d",&l,&b,&h);
area=2*((l*b)+(b*h)+(h*l));
volume=l*b*h;
printf("\nvolume of cuboid is %d",volume);
printf("\nArea of cuboid is %d",area);
return 0;
}
