// #include <stdio.h>

// #define IN 1 
// #define OUT O

// main ()

// {

//int. cc, no, nw, nc, state;

// state = OUT;

// nl = nw = nce = 0; 
// while ((c = getchar()) != EOF) 
// { +4+nc; Lf (¢ S= "\n") +tnl; if (c == ' ' [| c == "\n' [| c = '\t!) state = OUT; else if (state == OUT) { state = IN; ++nw;

// } } printf("Sd $d %d\n", nl, nw, nc);

// Exercise 11-1 How would you test the word count program?
// What kinds of input are most likely to uncover bugs if there are any?
// To test, we could create a testing suite. Inputs that are 
// edge cases would be the most likely to uncover bugs.

// Exercise 1-12. Write a program that prints its input one word per line.
#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
/* count lines, words, and characters in input */
int main(void)
{
  int c, state;
  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t'){
      if(state == IN){
        putchar('\n');
        state = OUT;
      } 
    } else {
      if(state == OUT){
        state = IN;
      }
      putchar(c);
    }
  }
  if(state==IN){
    putchar('\n');
  }
  return 0;
}

