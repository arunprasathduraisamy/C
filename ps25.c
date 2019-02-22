#include <stdio.h>
 int main(void) 
{
	char str[50],ch;
	int i,j,c=1,m=1;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		if(str[i]==str[j])
		{
			c=c+1;
if(c>m)
	{
	  m=c;
	  ch=str[i];
		}
	}
 
	}
	printf("\n%c",ch);
	return 0;
}
