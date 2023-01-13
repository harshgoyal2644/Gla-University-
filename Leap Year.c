#include<stdio.h>
int main()
{
	printf("Enter Any Year: ");
	int a;
	scanf("%d",&a);
	
	if(a%400==0)
	printf("Your Enter Year %d Is A Leap Year.",a);
	
	else if(a%100==0)
	{
		if(a%400==0)
		printf("Enter Year %d Is A Leap Year..",a);
		
		else printf("Enter Year %d Is Not A leap Year..",a);
	}
	
	else if(a%100!=0)
	{
		if(a%4==0)
		printf("Enter Year %d Is A Leap Year...",a);
		
		else printf("Enter Year %d is Not A leap Year...",a);
	}
	
	else printf("Enter Year %d IS not a Leap Year.",a);
	
	return 0;
}