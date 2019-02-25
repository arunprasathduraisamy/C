#include <stdio.h>
int main(void) 
{
	int l,r,le,i;
	scanf("%d %d",&l,&r);
	if(l>r)
	{
		le=l;
	}
	else
	{
		le=r;
	}
	for(i=2;i<=len;i++)
	{
		if((i%l==0)&&(i%r==0))
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
