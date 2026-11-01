// #include <stdio.h>
// /* count digits, white space, others */
// int main(void)
// {
//   int c, i, nwhite, nother;
//   int ndigit[10];
//   nwhite = nother = 0;
//   for (i = 0; i < 10; ++i)
//     ndigit[i] = 0;
//
//   while ((c = getchar()) != EOF)
//     if (c >= '0' && c <= '9')
//       ++ndigit[c-'0'];
//     else if (c == ' ' || c == '\n' || c == '\t')
//       ++nwhite;
//     else
//       ++nother;
//
//   printf("digits =");
//   for (i = 0; i < 10; ++i)
//     printf(" %d", ndigit[i]);
//   printf(", white space = %d, other = %d\n", nwhite, nother);
// }

// Exercise 1-13. Write a program to print a histogram of the lengths of words in its input.
// It is easy to draw the histogram with the bars horizontal; 
// a vertical orientation is more challenging.
// #include <stdio.h>
//
// int main(void) {
//   int c, n;
//   n = 0;
//
//   while ((c = getchar()) != EOF)
//     if (c == ' ' || c == '\n' || c == '\t'){
//        for(int i = 0; i < n; i ++){
//         printf("X");
//       }
//
//       printf("\n");
//       n = 0;
//     } else {
//       ++n;
//     }
// }

// Exercise 1-14. Write a program to print a histogram of the frequencies of different
// characters in its input.
#include <stdio.h>
/* count digits, white space, others */
int main(void)
{
  int c, i, nwhite, nother;
  int ndigit[10];
  nwhite = nother = 0;
  for (i = 0; i < 10; ++i)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
      ++ndigit[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;

  printf("digits\n");

  for (i = 0; i < 10; ++i){
    printf(" %d", ndigit[i]);
    for(int j = 0; j < ndigit[i]; j++){
      printf("X");
    }
    printf("\n");
  }

  printf("white space = %d\n", nwhite);
  for(int i = 0; i < nwhite; i++){
    printf("X");
  }
  printf("\n");

  printf("other = %d\n", nother);
  for(int i = 0; i <nother; i++){
    printf("X");
  }
  printf("\n");
}

