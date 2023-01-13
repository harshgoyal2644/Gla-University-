// write a c/p to check givrn number is strong/peterson/krishnamurty number or not.

#include<stdio.h>
int main()
{
    int n,temp,sum = 0;
    printf("Enter any number: ");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        int r = n%10;
        int f =1;
        for(int i=1;i<=r;i++)
        f = f*i;
        sum = sum+f;
        n = n/10;
    }
    if(sum == temp)
    printf("strong");
    
    else printf("Not strong");
    
    return 0;
}


