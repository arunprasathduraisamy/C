#include <stdio.h>
 
int main(void) 
 
{
int i,l,h,j;
printf("\n enter the start range:");
scanf("%d",&l);
printf("\n enter the end range");
scanf("%d",&h);
for(i=l;i<=h;i++)
{
for(j=2;j<=i;j++)
{
if(i%j==0)
break;
}
if(i==j)
printf("\n%d",j);
}
return 0;
}
