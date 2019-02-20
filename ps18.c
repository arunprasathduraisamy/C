#include <stdio.h>

int main()
{
    char a[10],b[10];
    int i;
    gets(a,b);
    a[0]=a[0]-32;
    b[0]=b[0]-32;
    puts(a,b);
    return 0;
}
