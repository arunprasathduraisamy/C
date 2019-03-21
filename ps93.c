#include <stdio.h>
int main() 
{
	int n;
	scanf("%d",&n);
	int array[n],i,m=0,res,j;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		res=(array[i])|(array[j]);
		if(res>m)
		{
			m=res;
		}
		}
	}
	printf("%d",m);
	return 0;
}
