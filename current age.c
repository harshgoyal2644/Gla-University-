#include<stdio.h>
int main()
{
	int age,y,m,d;
	printf("Enter Your Date Of Birth in DD-MM-YYYY Foramte: \n");
	scanf("%d%d%d",&d,&m,&y);
	printf("Your DOb is : %d-%d-%d\n",d,m,y);
	
	int cy;
	printf("Enter Current Year:");
	scanf("%d",&cy);
	
		age=cy-y;    
		printf("Your Age is %d",age);
	return 0;
}
