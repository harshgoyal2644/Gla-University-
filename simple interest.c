#include <stdio.h>

int main()
{ 
    float si,p,r,t;
    printf("Enter Principal ammount :");
    scanf("%f",&p);
    printf("Enter Interest Rate Per Year :");
    scanf("%f",&r);
    printf("Enter Time(In Years) :");
    scanf("%f",&t);
    
    si = (p*r*t)/100;
    printf("Simple Interest : %f",si);
    

    return 0;
}

