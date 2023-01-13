#include <stdio.h>

int main()
{
   int a,b;
   printf("Enter any value : ");
   scanf("%d",&a);
    
     b = a*((a>0)-(a<0));
     printf("%d",b);
     return 0;
}

