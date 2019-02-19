#include <stdio.h>
int main()
{
    char a[10];
    int i,n,c=0;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<=n;i++)
    {
        if(a[i]=='\0')
        a[i]='.';
        }
    printf("%s",a);
return 0;
}
