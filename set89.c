#include <stdio.h>

int main(void) 
{
int num1,num2,p,i,f=0;
scanf("%d %d",&num1,&num2);
p=num1*num2;
for(i=1;i<=pro/2;i++)
{
if(i*i==p)
{
f=1;
break;
}
}
if(f==1)
{
printf("\nyes");
}
else
{
printf("\nno");
}
return 0;
}
