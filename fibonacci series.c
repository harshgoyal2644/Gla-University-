
#include <stdio.h>
int main()
{
    int a=0,b=1,c=1,n;
    printf("n = ");
    scanf("%d",&n);
    printf(" 0,1,");

    for(int i=3;i<=n;i++)
    {
        printf("%d,",c);
        a=b;
        b=c;
        c=a+b;
    }
}
