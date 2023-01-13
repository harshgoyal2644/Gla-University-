//WAP to print all even no.s b\w given range using function.
#include <stdio.h>
int eo(int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;
}
int main()
{
    int a,b;
    printf("enter start and ending no.s:\n");
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(eo(i))
        printf("%d\n",i);
        
    }
    
}

