// #include <stdio.h>
//
// /* power: raise base to n-th power; n >= 0 */
// int power(int base, int n);
//
// /* test power function */
// int main(void)
// {
//     int i;
//
//     for (i = 0; i < 10; ++i) {
//         printf("%d %d %d\n", i, power(2, i), power(-3, i));
//     }
//
//     return 0;
// }
//
// /* power: raise base to n-th power; n >= 0 */
// int power(int base, int n)
// {
//     int i;
//     int p = 1;
//
//     for (i = 1; i <= n; ++i) {
//         p = p * base;
//     }
//
//     return p;
// }

// Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.0
#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */
int convert(int fahr);

int main(void)
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = convert(fahr);
        printf("%3d\t%6d\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}

int convert(int fahr){
  return 5 * (fahr - 32) / 9;
}
