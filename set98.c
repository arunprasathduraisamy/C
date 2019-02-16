#include <stdio.h>
int main() 
{
int x,y,r,lcm,gcd,a,b;
scanf("%d%d",&x,&y);
a=x;
b=y;
do
{
r=x%y;
if(r==0)
break;
x=y;
y=r;
}
while(remainder!=0);
gcd=y;
lcm=(a*b)/gcd;
return 0;
}
