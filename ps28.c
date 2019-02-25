#include<stdio.h>
#include<string.h>
int main() 
{
    char a[10];
    char str[]="kabali";
    int i,j,t=0,num,num1,k=0,l,count=0;
    num=strlen(str);
    scanf("%d",&num1);
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(str[i]>str[j])
            {
            t=str[i];
            str[i]=str[j];
            str[j]=t;
            }
        }
    }
   while(k<num1)
   {
       scanf("%s",a);
       len=strlen(a);
       if(num==l)
       {
           for(i=0;i<num;i++)
           {
               for(j=i+1;j<num;j++)
               {
                   if(a[i]>a[j])
                   {
                       t=a[i];
                       a[i]=a[j];
                      a[j]=t;
              }
            }
          }
         if(strcmp(str,a)==0)
         {
           count++;
       }
     }k++;
   }
   printf("%d",count);
	return 0;
}
