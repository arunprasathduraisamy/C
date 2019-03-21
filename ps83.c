#include <stdio.h>
int main() 
{
	int num;
	scanf("%d",&num);
	int array[n],i;
	for(i=0;i<num;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<num;i++)
	{
		if(array[i]>array[i+1])
		{
			printf("%d",array[i]);
			break;
		}
	}
	return 0;
}
