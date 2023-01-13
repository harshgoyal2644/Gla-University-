#include <stdio.h>

int main()
{float T,P,A,m,p,c,b,e;
    printf("Enter Your Maths Marks :");
    scanf("%f",&m);
    
    printf("Enter Your Physics Marks :");
    scanf("%f",&p);
    
    printf("Enter Your Chemistry Marks :");
    scanf("%f",&c);
    
    printf("Enter Your Biology Marks :");
    scanf("%f",&b);
    
    printf("Enter Your English Marks :");
    scanf("%f",&e);
    
    T = m+p+c+b+e;
    A = T/5;
    P = (T/500)*100;
    
    printf("Your Total score = %f \n",T);
    printf("Your Average score = %f \n",A);
    printf("Your Percentage score = %g%\n",P);
    


    return 0;
}

