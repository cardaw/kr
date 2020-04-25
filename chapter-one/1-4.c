#include <stdio.h>

/* print Celcius-Fahrenheit table for c = 0, 20, ..., 300; 
   floating-point version with header */

int main()
{
  float f, c;
  int lower, upper, step;

  lower = 0; /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20; /* step size */

  c = lower;
  printf("Celcius to Farhenheit\n");
  while (c <= upper) {
    f = (9.0/5.0) * c + 32.0;
    printf("%10.0f %10.1f\n", c, f);
    c += step;
  }
  return 0;
}