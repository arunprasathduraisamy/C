#include <stdio.h>
int main() 
{
	char str[20];
	int i,num;
	scanf("%s",str);
	num=strlen(str);
	for(i=0;i<num;i++)
	{
		if(i%2==0)
		{
			printf("%c",str[i]);
		}
		}
	printf(" ");
	for(i=0;i<num;i++)
	{
		if(i%2==1)
		{
			printf("%c",str[i]);
		}
		}
	return 0;
}
