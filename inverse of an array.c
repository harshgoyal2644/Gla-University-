#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter the element of the array: ");
	
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
	
	int t;
	for(int i=0;i<n/2;i++)
	{	
		t = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = t;	
	}
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);

}
