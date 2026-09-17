#include <stdio.h>

/*copy input to output, v1*/
main() {
    int c;

    c = getchar();
    while(c != EOF) {
        putchar(c);
        c = getchar();
    }
}

/*Copy input to output, v2*/
main() {
    int c;

    while((c = getchar()) != EOF) {
        putchar(c);
    }
}

/*Exercise 1-6: Verify that the expression getchar() != EOF is 0 or 1*/
main() {
    int c;

    while(c = getchar() != EOF) {
        putchar(c);
    }
}

/*Exercise 1-7: Write a program to print the value of EOF*/
main() {
    printf("%d", EOF);
}