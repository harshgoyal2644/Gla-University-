// write a c/p to find sum of series:
//1^2 + 2^3 + 3^4 +...................upto n
#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int p=1;
        for(int j=1;j<=i+1;j++)
        p = p*i;
        sum = sum+p;
    }
    printf("%d",sum);
    
}
