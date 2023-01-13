// write  a c/p to multiply a number by 65 using bitwise operator

#include <stdio.h>
int main()
{
    int a,b;
    
    printf("Enter any number : ");
    scanf("%d",&a);
    
    b = (a<<6)+a;
    printf("%d",b);

    return 0;
}

