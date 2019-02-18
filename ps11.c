#include <stdio.h>
#include <string.h>
void main()
{
    int i,n,j,fact=1;
    scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
    fact=fact*j;
        }
    printf("%d",fact);
    }
