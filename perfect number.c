// write a c/p to check given no. is perfect or not.
#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter any number: ");
    scanf("%d",&a);
    for(int i=1;i<a;i++)
    {
     if(a%i==0)
     sum = sum +i;
     
    }
    if(sum==a)
    printf("Perfect");
    else printf("Not perfect");
    
    
}
