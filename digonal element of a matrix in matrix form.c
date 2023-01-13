#include<stdio.h>
int main()
{
    int  n;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Insert the element in the matrix: ");
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    
    for(int i=0;i<n;i++)
   { for(int j=0;j<n;j++)
   { if(i==j)
    printf("%d",a[i][j]);
    else printf(" _ ");}
    printf("\n");
    }
    
}
