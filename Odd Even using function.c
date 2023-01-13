//write a c programme to check given number is even or odd usinf function.

#include<stdio.h>
int scan(int );
int n(int );
int main()
{
    int x;
    int y = scan(x);
    int z = n(y);
    return 0;
}

int scan(int n)
{
    scanf("%d",&n);
    return n;
}
int n(int p)
{
    if(p%2==0)
    printf("Even");
    else printf("ODD");
}
