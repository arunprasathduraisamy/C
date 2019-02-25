#include <stdio.h>
int main(void) 
{
	char s[20];
	int i,c1=0,c2=0;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='(')
		{
			c1=c1+1;
		}
		else if(s[i]==')')
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
