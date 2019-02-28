 #include<stdio.h>
#include<conio.h>
void main()
{
    char a[50];
    int i,j,n,flag=0,c=0,d;
    scanf("%s",a);
   n=strlen(a);
    //printf("%d",n);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]=="@")
        {
            flag=1;
       }
        if(a[i]=='.')
       {
           flag=1;
          
       }
    }
       for(i=0;a[i]!='@';i++)
       {
           c++;
       }
       if(c>3)
       {
          c==1;
       }
       for(i=0;a[i]!='\0';i++)
       {
           if(a[c-1]=='m'&&a[c-2]=='o'&&a[c-3]=='c'&&a[c-4]=='.')
           {
               flag==1;
           }
       }
       if(flag==1)
       {
            printf("vaild");
       }
    
       else
       {
           printf("not vaild");
       }
    }

