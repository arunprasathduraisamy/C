#include <stdio.h>
int main() 
{
int x,y,r,gcd;
scanf("%d%d",&x,&y);
do
{
r=x%y;
if(r==0)
break;
x=y;
y=r;
}
while(r!=0);
gcd=y;
return 0;
}
