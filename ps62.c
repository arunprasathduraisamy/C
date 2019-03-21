#include <stdio.h>
int main() 
{
	int n,k,a[50],i,j,temp;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
	printf("%d",ak-1]);
	
	return 0;
}
