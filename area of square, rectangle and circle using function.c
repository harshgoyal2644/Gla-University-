#include<stdio.h>
void areasqr(int x);
void areacircle(int x);
void arearectangle(int x,int y);

int main()
{
    int s,l,b,r;
    printf("Enter the side of the square: ");
    scanf("%d",&s);
    printf("Enter the length and bredth of reactangle: ");
    scanf("%d%d",&l,&b);
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    
    areasqr(s);
    arearectangle(l,b);
    areacircle(r);
    
}

void areasqr(int x)
{
    printf("Area of square is %d\n",x*x);
}
void areacircle(int x)
{
    printf("Area of circle is %.2f\n",2*3.14*x);
}
void arearectangle(int x,int y)
{
    printf("Area of rectangle is %d\n",x*y);
}


