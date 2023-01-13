#include<stdio.h>
int
main ()
{
  int ammount, a, b, c, x, y;
  printf ("Plz Enter Your Ammount In The Multiple Of 100\n");
  printf ("Enter Your Ammount(₹) :");
  scanf ("%d", &ammount);
  x = ammount;
  
  a = ammount / 2000;
  ammount = ammount % 2000;
  b = ammount / 500;
  ammount = ammount % 500;
  c = ammount / 100;


  ammount = x;
  y = ammount / 100;
  if (ammount == y * 100)
    {
      printf ("Ammount(₹)     No. Of Notes\n");
      printf (" 2000           %d\n", a);
      printf (" 500            %d\n", b);
      printf (" 100            %d\n", c);
    }
  else
    {
      printf ("Plz Enter Your Ammount In The Multiple Of 100\n");
    }


  return 0;
}


