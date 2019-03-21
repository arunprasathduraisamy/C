#include <stdio.h>
int main() 
{
	int n;
	scanf("%d",&n);
	int array[n],i,r=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		r=r^array[i];
	}
	printf("%d",r);
	return 0;
}
