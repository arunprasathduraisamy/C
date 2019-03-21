#include<stdio.h>
int fact(int x);
int main()
{
    long int num,k,m;
    float t;
    scanf("%ld %ld",&n,&k);
    if(k<=n && k<=10)
    {
        m=num-k;
        num=fact(n);
        k=fact(k);
        m=fact(m);
        t=num/(k*m);
        printf("%.0f",t);
    }
        return 0;
}
int fact(int x)
{
   int f=1,i;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}
