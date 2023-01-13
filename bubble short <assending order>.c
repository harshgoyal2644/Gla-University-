//bubble short <assending order>

#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the array: ");scanf("%d",&n);
    int a[n];
    printf("insert elements in the array: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("Your given array is: ");
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    printf("\n");
    
    for(int i=0;i<n;i++)
    {   
        for(int j=0;j<n-1;j++)
        if(a[j]>a[j+1])
        {
            int t = a[j];
            a[j]=a[j+1];
            a[j+1] = t;
        }
    }
    
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    
    
}
