#include <stdio.h>
int main() 
{
	int i,n,a[50],sum=0,avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("\n%d",sum);
	printf("\n%d",avg);
	return 0;
}
