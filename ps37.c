#include <stdio.h>
int main(void) 
{
	char s[20];
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]>96)
		{
			s[i]=s[i]-32;
		}
		else if(s[i]<91)
		{
			s[i]=s[i]+32;
		}
	}
	printf("%s",s);
		
		
		return 0;
}
