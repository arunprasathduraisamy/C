#include<stdio.h>
int main(void)
{
    int num,p,n=1;
    scanf("%d %d",&num,&p);
    if(p==0)
        printf("%d",n);
    else
      {
      while(p!=0)
      {
          n=n*num;
          p--;
      }
      printf("%d",n);
      }
}      
