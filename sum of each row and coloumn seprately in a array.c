//wap to print sum of each row and coloumn seprately in a array.

#include<stdio.h>
int main()
{ 
    int a[3][3];
    printf("Inset the elements: ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    
    for(int i=0;i<3;i++)
    {   
        int sum =0;
        for(int j=0;j<3;j++)
        {
        
        sum = sum + a[i][j];
        printf("%d ",a[i][j]);
        }
        printf(": %d",sum);
        printf("\n");
    }
    printf("- - - - \n");
    for(int i=0;i<3;i++)
    {
        int sum = 0;
        for(int j=0;j<3;j++)
        sum = sum + a[j][i];
        printf("%d ",sum);
        
    }
}  
    
    
    
    
    

