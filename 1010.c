#include <stdio.h>
 int main() 
{
	int num,r,p=1;
	scanf("%d",&num);
	while(num!=0)
	{
		r=num%10;
		p=p*r;
		num=num/10;
	}
	printf("\n%d",p);
	return 0;
}
