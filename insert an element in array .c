//c-program-to-insert-element-in-array.
#include<stdio.h>
int main()
{
    int n;
    int a[1000];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    
    printf("insert elements in the array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the number you want to insert :");int x;
    scanf("%d",&x);
    printf("enter the index you want to insert the element: ");
    
    int indx;scanf("%d",&indx);
    for(int i=0;i<=n;i++)
    {
        if(i==indx)
        {   
            for(int j=0;j<n-indx;j++)
            {   
                a[n-j] = a[n-j-1];
            }
            a[i] = x;break;
        } 
    }
    
    for(int i=0;i<=n;i++)
    printf("%d ",a[i]);
    
    return 0;
    
}
