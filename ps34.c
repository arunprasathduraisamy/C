#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[20];
	scanf("%[^\n]s",s);
	int i,f;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			f=1;
		}
		else
		{
			f=0;
			break;
		}
	}
	if(f==0)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}
	
	return 0;
}
