#include<stdio.h>
int max(int x,int y);
int min(int x,int y);
int main()
{
    int a,b;
    printf("Enter any two integers: ");
    scanf("%d%d",&a,&b);
    int maximum = max(a,b);
    int minimum = min(a,b);
    printf("MAX: %d\nMIN: %d",maximum,minimum);
    return 0;
}

int max(int x,int y)
{
    return x>y?x:y;
}
 
int min(int x,int y)
{
    return x<y?x:y;
}
