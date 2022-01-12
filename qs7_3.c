/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float years = 19;
  float months = 1;
  float days = 27;
  float d;
  float y, m;
  d = days + (months*30) + (years*365);
  m = (days/30) + months + (years*12);
  y = (days/365) + (months/12) + years;
  printf ("age in days=%f\n age in months =%f\n age in years =%f", d, m, y);
    printf("Hello World");

    return 0;
}
