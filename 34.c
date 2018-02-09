//count the lines
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int count=0,i,l;
	printf("Enter a paragraph");
    scanf("%[^\n]s",str);
    l=strlen(str);
	for (i = 0; i<l; i++)
		if (str[i] == '.')
		count++;
	printf("\nTotal lines are:%d",count);
	return 0;
}
