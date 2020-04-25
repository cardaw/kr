#include <stdio.h>

/* print Fahrenheit-Celcius table for f = 300, 280, ..., 0; 
   floating-point version with header */

int main()
{
  float f, c;
  int lower, upper, step;

  lower = 0; /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20; /* step size */

  f = upper;
  printf("Farhenheit to Celcius\n");
  while (f >= lower) {
    c = (5.0/9.0) * (f-32.0);
    printf("%10.0f %10.1f\n", f, c);
    f -= step;
  }
  return 0;
}