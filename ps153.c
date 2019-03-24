#include<stdio.h>
void main()
{
    int num,a[10],b[10],i,j,t;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(b[i]<b[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        printf("%d ",a[i]);
    }
  }
