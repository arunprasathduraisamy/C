#include <stdio.h>
#include<string.h>
int main() 
{
	char str[50];
	int i,f=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==str[i+1])
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}
	return 0;
}
