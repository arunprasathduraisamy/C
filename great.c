#include<stdio.h>
int main()
{
   int num1,num2,num3;
   
   scanf("%d %d %d",&num1,&num2,&num3);

   if((num1>num2)&&(num1>num3))
      printf("\n %d",num1);
   else if((num2>num3)&&(num2>num1))
      printf("\n %d",num2);
   else
      printf("\n %d",num3);
   return 0;
}
