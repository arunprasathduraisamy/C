#include <stdio.h>

int main()
{
    char c;
    scanf("%s",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='w'||c=='A'||c=='E'||c=='I'||c=='O'||c=='W')
    {
        printf("vowel");
    
    }
    else
    {
        printf("invaild");
    }

    return 0;
}
