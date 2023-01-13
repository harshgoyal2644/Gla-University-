// write a c/p to divide a no. by 32  using bitwise operator

#include <stdio.h>

int main()
{
    int a,b;
    printf("enter any number : ");
    scanf("%d",&a);
    
    b = a>>5;
    printf("%d",b);
    return 0;
}

