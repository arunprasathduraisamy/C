#include <stdio.h>
int main()
{
 int n,i,term;
 scanf("%d\n",&n);
 int a[n];
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 term=a[0];
 for(i=1;i<n;i++)
 {
   if(term>a[i])
   term=a[i];
 }
 printf("%d",term);
 return 0;  
}
