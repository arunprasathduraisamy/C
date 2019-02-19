int main()
{
    char a[10];
    int i,c=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='1'&&a[i]=='2'&&a[i]=='3'&&a[i]=='4'&&a[i]=='5'&&a[i]=='6'&&a[i]=='7'&&a[i]=='8'&&a[i]=='9'&&a[i]=='0')
    c++;
    }
    if(c>0)
        printf("yes");
    else
    {
        printf("no");
    }

    return 0;
}
