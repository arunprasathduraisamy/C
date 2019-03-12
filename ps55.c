
#include <stdio.h>
int main()
{
    int p,a,i,j,peri,area,f=0;
	scanf("%d %d",&p,&a);
	for(i=1;i<=(p/2);i++)
	{
	    for(j=1;j<=(p/2);j++)
	{
	    perimeter=2*(i+j);
	    area=i*j;
	    if(peri==p && area==a)
	    {
	       f=1;
	        break;
	    }
	}
	}
	if(f==1)
	printf("yes");
	   if(f==0)
	{
	    printf("no");
	}
	return 0;
}
