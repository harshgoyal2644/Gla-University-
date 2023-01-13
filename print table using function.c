#include<stdio.h>
void printTable(int n);
int main()
{
    int x;
    printf("enter any integer: ");
    scanf("%d",&x);
    printTable(x);
    return 0;
}

void printTable(int n)
{
    for(int i=1;i<11;i++)
    printf("%d * %d = %d\n",n,i,n*i);
}
