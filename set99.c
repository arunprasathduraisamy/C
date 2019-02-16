#include <stdio.h>
int main() 
{
	char str[50],t[50];
	int i,k,j;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]>str[j])
			{
				t[k]=str[i];
				str[i]=str[j];
				str[j]=tk];
		}	}
	}
	printf("\n%s",str);
	return 0;
}
