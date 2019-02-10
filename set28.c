#include <stdio.h>
int main(void) 
{
int n,r,sum=0;
n=350;
while(n<=450)
{
remainder=n%10;
sum=sum+(r*r*r);
n=n/10;
if(n==sum)
printf("\n %d is an Armstrong number",n);
else
printf("\n %d is not an Armstrong number",n);
}
n++;
return 0;
}
