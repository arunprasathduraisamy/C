#include <stdio.h>
int main() 
{
	float p,r,tot;
	int si,n;
	scanf("%f%d%f",&p,&n,&r);
	tot=((p*n*r)/100);
	si=floor(tot);
	printf("\n%d",si);
	return 0;
}
