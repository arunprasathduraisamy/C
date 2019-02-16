#include <stdio.h>
int main() 
{
	int num1,num2,i;
	char sym;
	for(i=1;i<=4;i++)
	{
	scanf("%d %c %d",&num1,&sym,&num2);
if(sym=='/')
{
printf("%d\n",num1/num2);
}
else
{
printf("%d\n",num1%num2);
}
}
return 0;
}
