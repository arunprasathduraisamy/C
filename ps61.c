#include <stdio.h>
int main() 
{
	int n,array[50],i,j,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(array[i]>array[j])
		{
			t=array[i];
			array[i]=array[j];
			array[j]=t;
		}
		}
	}
	printf("\n%d",array[1]);
		return 0;
}
