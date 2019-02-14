#include <stdio.h>
#include<string.h>
int main() 
{
	int a,b,s;
	scanf("%d %d",&a,&b);
	s=a+b;
	if(s%2==0)
	printf("even");
	else
	printf("odd");
	return 0;
}
