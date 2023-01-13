// write a c/p to find factorial of a number.
#include<stdio.h>
int main()
{
    int a,c=1;
    printf("Enter any number: ");
    scanf("%d",&a);
    
    for(int i = 1;i<=a;i++)
    {
        c = c*i;
    }
    
    printf("%d",c);
}

