#include <stdio.h>
int main() 
{
	int le,br,hi;
	scanf("%d %d %d",&le,&br,&hi);
	int vol,tsa;
	vol=le*br*hi;
	tsa=2*((le*br)+(br*hi)+(hi*l));
	printf("\nVOL=%d",vol);
	printf("\nTSA=%d",tsa);
	return 0;
}
