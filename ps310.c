#include <stdio.h>
int main(void) 
{
	char s1[50],s2[50];
	int i,k,n1,n2,c=0;
	scanf("%s %s %d",s1,s2,&k);
	n1=slen(s1);
	n2=slen(s2);
	if(n1==n2)
	{
		for(i=0;i<n1;i++)
		{
			if(s1[i]==s2[i])
			{
				c=c+0;
			}
			else
			{
				c=c+1;
			}
		}
		if(c==k)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	else
	{
		printf("no");
	}
	return 0;
}
