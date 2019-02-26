#include <stdio.h>
int main(void) 
{
	int n,i,j,m=1,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=i;j>0;j--)
		{
			m=m*2;
			if(m==n)
		{
				f=1;
				break;
			}
		}
	}
	if(f==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
