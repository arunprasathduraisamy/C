#include<stdio.h>
int main()
{
char a[10],b,i;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
    if(i%2==0)
    {
        b=a[i];
        a[i]=a[i+1];
        a[i+1]=b;
    }
}
printf("%s",a);
return 0;

}
