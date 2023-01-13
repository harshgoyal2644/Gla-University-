

#include<stdio.h>
int main()
{
    int n,even=0,odd=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n],e[n],o[n];
    printf("inserting the elements in the array: ");
    int x=0,y=0;
    for(int i=0;i<n;i++)
   {      
          
        scanf("%d",&a[i]);
        if(a[i]%2==0)
       { e[x] = a[i];
        even++;
        x++;}
        else 
        { 
          o[y] = a[i];
        odd++;
        y++;}
   }
   printf("all even numbers is the : ");
   printf("[ ");
   for(int i=0;i<even;i++)
   printf("%d ",e[i]);
   printf("]\n");

   printf("all odd numbers is the : ");
   printf("[ ");
   for(int i=0;i<odd;i++)
   printf("%d ",o[i]);
   printf("]");

   

   

}
