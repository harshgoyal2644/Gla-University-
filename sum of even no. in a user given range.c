#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("enter start point: ");
    scanf("%d",&a);
    printf("Enter ending point: ");
    scanf("%d",&b);
   
   for(;a<=b;a++)
   {
   	if(a%2==0)
   	sum = sum +a;
   	
   }
   printf("%d",sum);
}
