#include <stdio.h>
#include<math.h>
#define pi 3.14
int main(void) {
	int n;
	float r;
	scanf("%d",&n);
	r=sin(n*pi/180);
	printf("%f",r);
	return 0;
}
