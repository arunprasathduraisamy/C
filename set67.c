#include <stdio.h>
int main(void) 
{
int x,y,temp;
scanf("%d %d",&x,&y);
printf("\nx=%d",x);
printf("\ny=%d",y);
temp=x;
x=y;
y=temp;
printf("\nx=%d",x);
printf("\ny=%d",y);
return 0;
}
