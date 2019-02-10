#include<stdio.h>
int main(void)
{
    int n,num,rem=0,temp=0;
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        rem=n%10;
        temp=(temp*10)+rem;
        n=n/10;
    }printf("%d ",temp);
    if(temp==num)
    printf("yes...palindrome");
    else
    printf("no...not a palindrome ");
}
