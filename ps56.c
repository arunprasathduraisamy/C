#include <stdio.h>
#include<string.h>
int main()
{
	int n,k,i,j;
	char a[10],t;
	scanf("%s",a);
  scanf("%d",&k);
	n=strlen(a);
	
	for(i=0;i<k;i++)
	{
	    t=a[n-1];
        for(j=n-2;j>=0;j--)
 	{
	   a[j+1]=a[j];
	}
	    a[0]=t;
	   
	} printf("%s",a);
	return 0;
}
