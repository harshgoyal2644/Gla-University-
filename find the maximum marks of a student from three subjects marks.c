// write a c/p to find the maximum marks of a student from three subjects marks.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter your three subjects marks : ");
    scanf("%d%d%d",&a,&b,&c);
    
   if ( a>=b && a>=c)
    printf("%d",a);
    
   else if ( b>=a && b>=c)
    printf("%d",b);

   else printf("%d",c);
   
   return 0;
    
}

