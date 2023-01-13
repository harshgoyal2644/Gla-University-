//wap a c programme to make a function which will work exctly as pow() of math.h without using it.
#include<stdio.h>
int pw(int,int);
int main()
{
    int a,b;
    printf("Enter the base and the power: ");
    scanf("%d%d",&a,&b);
    int x = pw(a,b);
    printf("%d",x);
}

int pw(int x,int y)
{   
    int t=x;
    for(int i=1;i<y;i++)
   
    x = x*t;
    return x;
}
