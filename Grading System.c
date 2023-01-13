#include<stdio.h>
int main()
{
    float marks;
    printf("Enter Your Marks Out Of 100 = ");
    scanf("%g",&marks);
    
    if (marks>100){
        printf("Please Enter Your Marks Out Of 100 ");
    }
    
    else if (marks>85 && marks<=100){
        printf("Great Job!\n");
        printf(" Your Grade Is A");
    }
    else if (marks>70 && marks<=85){
        printf("Well Done!\n");
        printf(" Your Grade Is B");
    }
    else if (marks>50 && marks<=70){
        printf("Need Some More Practice!\n");
        printf(" Your Grade Is C");
    }
    else{
        printf("Don't Loss Your Hope.You Can Do It Next Time!\n");
        printf("Sorry!You Are Fail");
    }
    return 0;
    
    
}

