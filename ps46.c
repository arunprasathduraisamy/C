#include<stdio.h>
void main()
{
int n,k,c=0,r;
scanf("%d%d",&n,&k);
while(n!=0)
{
r=n%10;
if(r==k)
{
c=c+1;
}
}
printf("%d",c);
n=n/10;

}
