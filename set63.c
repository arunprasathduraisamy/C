#include <stdio.h>
 
int main(void) 
{
	int n,t,s=0;
	printf("enter the number");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		t=n%10;
		s=s+t;
		n=n/10;
}
	printf("\n%d",s);
	return 0;
}
