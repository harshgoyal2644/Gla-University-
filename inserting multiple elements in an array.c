#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[100];
	printf("Enter the element of array: ");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	int x;
	printf("Enter the no. of element you want to add: ");
	scanf("%d",&x);

	printf("Enter the elements you want to add: ");
	for(int i=0;i<x;i++)
	{
		int t;
		scanf("%d",&t);
		a[n+i] =t;
	}
	
	for(int i=0;i<n+x;i++)
	printf("%d ",a[i]);
	
	
}
