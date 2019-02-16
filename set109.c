#include <stdio.h>
int main() 
{
	int x,y,z,mod;
	scanf("%d%d%d",&x,&y,&z);
	mod=((x*y)%z);
	printf("\n%d",mod);
	return 0;
}
