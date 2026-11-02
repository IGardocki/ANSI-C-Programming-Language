// Exercise 2-1. Write a program to determine the ranges of char, short, int, 
// and long variables, both signed and unsigned, by printing appropriate values
// from standard headers and by direct computation. Harder if you compute them:
// determine the ranges of the various floating-point types.


#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){
  printf("UCHAR_MAX: %i\n", UCHAR_MAX);
  printf("SCHAR_MAX: %i\n", SCHAR_MAX);
  printf("SCHAR_MIN: %i\n", SCHAR_MIN);
  printf("INT_MAX: %i\n", INT_MAX);
  printf("INT_MIN: %i\n", INT_MIN);
  printf("LONG_MAX: %li\n", LONG_MAX);
  printf("LONG_MIN: %li\n", LONG_MIN);
  printf("SHRT_MAX: %i\n", SHRT_MAX);
  printf("SHRT_MIN: %i\n", SHRT_MIN); 
  printf("UINT_MAX: %i\n", UINT_MAX);
  printf("ULONG_MAX: %lu\n", ULONG_MAX);
  printf("USHRT_MAX: %i\n", USHRT_MAX);
  printf("FLT_MAX: %f\n", FLT_MAX);
  printf("FLT_MIN: %f\n", FLT_MIN);

  return 0;
}
