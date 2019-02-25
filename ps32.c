#include <stdio.h>
int main(void) 
{
	int num,k,i,len;
	scanf("%d %d",&num,&k);
	if(num>k)
	{
		len=num;
	}
	else
	{
		len=k;
	}
	for(i=len;i>=2;i--)
	{
		if(num%i==0 && k%i==0)
		{
			printf("%d",i);		
		}
	}
return 0;
}
