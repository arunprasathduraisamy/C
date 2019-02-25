#include <stdio.h>
#include<string.h>
int main()
{
   char s[50][50],t[50];
   int num;
   scanf("%d",&num);
   for(int i=0;i<num;i++)
   {
       scanf("%s",s[i]);
   }
   for(int i=0;i<num;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(strcmp(s[i],s[j])>0)
           {
               strcpy(t,s[i]);
               strcpy(s[i],s[j]);
               strcpy(s[j],t);
     }
       }
   }
   for(int i=0;i<num;i++)
   {
       printf("\n%s",s[i]);
   }
    return 0;
}
