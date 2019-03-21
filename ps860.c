

#include <stdio.h>

void main()
{
    int a[10],i,n,count_even=0,count_odd=0,temp1,temp2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    {
        count_even=count_even+1;
        temp1=a[i];
        
    }
    else
    {
        count_odd=count_odd+1;
        temp2=a[i];
    }
}

if(count_even==1)
{
    printf("%d",temp1);
}
else
{
    printf("%d",temp2);
}
}
