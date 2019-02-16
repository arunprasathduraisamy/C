#include <stdio.h>
int main(void) 
{
int num1,num2,i;
for(i=1;i<=3;i++)
{
scanf("%d %d\n",&num1,&num2);
if(num1>num2)
{
	printf("\n%d",num1-num2);
}
else
{
printf("\n%d",num2-num1);
}
}
return 0;
}
