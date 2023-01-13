#include <stdio.h>

int main()
{
  float r,pi=3.14;
  printf("Enter the value of radius = ");
  scanf("%f",&r);
  float a = pi*r*r;
  float c = 2*pi*r;
  printf("Area Of Circle is = %f\n",a);
  printf("Circumference of Circle is = %f",c);
  return 0;
}



