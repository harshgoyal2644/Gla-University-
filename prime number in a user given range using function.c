#include<stdio.h>
void Prime(int x, int y);
int main()
{
    int a,b;
    printf("Enter the range: ");
    scanf("%d%d",&a,&b);
    Prime(a,b);
    return 0;
}

void Prime(int x , int y)
{
    
    
    for(;x<=y;x++)
    {   
        int c=0;
        for(int i=2;i<=x/2;i++)
        if(x%i==0)
            c++;
        
        
        if(c==0)
        printf("%d\n",x);
        
        
    }
}
