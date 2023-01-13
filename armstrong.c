// write a c/p to check given number is armstrong or not.

#include<stdio.h>
#include<math.h>
int main()
{
    int a,c=0,temp,sum=0;
    printf("enter any number: ");
    scanf("%d",&a);
    temp = a;
    //count the digits in given number
    while(a>0)
    {
        a = a/10;
         c++; 
        
    }
    a = temp;
    while(a>0)
    {
        int r = a%10;
        sum = sum+pow(r,c);
        a = a/10;
        
    }
    if(sum == temp)
    printf("armstrong");
    else printf("not armstrong");
}

