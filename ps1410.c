#include <stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int i,l,x=0,y=0,z;
    gets(s);
    l=strlen(s);
       printf("%d ",l);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a')
        {
               x++;
        }
        else if(s[i]=='b')
        {
            y++;        
        }
         } 
         z=x+y;  
    if(l==z)
    printf("yes");
    else
    printf("no");
  }
