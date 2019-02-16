#include <stdio.h>
 int main() 
{
int num,a[30],i;
scanf("%d",&num);
for(i=1;i<=num;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=num;i++)
{
if(i!=a[i])
{
printf("\n%d",i);
break;
}
}
return 0;
}
