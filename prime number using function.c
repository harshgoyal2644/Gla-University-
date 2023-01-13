// wap a c programme to check given number is prime or not using function.
#include<stdio.h>
void isPrime(int n);
int main()
{
    int x;
    printf("Enter any integer value : ");
    scanf("%d",&x);
    isPrime(x);
    isPrime(30);
    isPrime(2);
    isPrime(9);
    
    return 0;
}

void isPrime(int n){
    
    int c=0;
    for(int i=2;i<=n/2;i++)
    {if(n%i==0)
    c++;}
    
    c==0 ? printf("%d:PRIME\n",n) : printf("%d:NOT_PRIME\n",n);
    
}
