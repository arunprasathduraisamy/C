#include <stdio.h>
int main(void) 
{
	char s[50];
	int i,c=0;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			c=c+1;
		}
	}
	printf("\n%d",c);
	return 0;
}
