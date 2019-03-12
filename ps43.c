#include <stdio.h>
int main(void) 
{
	char str[20];
	int i,c1=0,c2=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='(')
		{
			c1=c1+1;
		}
		else if(str[i]==')')
		{
			c2=c2+1;
		}
	}
	if(c1==c2)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
