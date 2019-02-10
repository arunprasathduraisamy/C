#include <stdio.h>
#include<math.h>

int main() {
	//code
	int power,number,ans;
	printf("enter the number and its power :\n");
	scanf("%d %d ",&number,&power);
	ans = pow(number,power);
	printf("\nthe power is :%d",ans);
	return 0;
}
