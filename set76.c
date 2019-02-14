#include<stdio.h>
int main(void)
{
int num,i,f=0;
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
f=1;
break;
}
}
if(f==0)
{
printf("\n prime");
}
else
{
printf("\n not a prime number");
}
return 0;
}
