#include <stdio.h>

#define IN 1 
#define OUT O

main ()

{

int. cc, no, nw, nc, state;

state = OUT;

nl = nw = nce = 0; 
while ((c = getchar()) != EOF) 
{ +4+nc; Lf (¢ S= "\n") +tnl; if (c == ' ' [| c == "\n' [| c = '\t!) state = OUT; else if (state == OUT) { state = IN; ++nw;

} } printf("Sd $d %d\n", nl, nw, nc);
