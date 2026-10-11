#include <stdio.h>

/*count lines in input*/
main(){
    int c, nl;

    nl = 0;
    while((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
    }
    printf("%d\n", nl);
}

/*Exercise 1-8: Write a program to count blanks, tabs, and newlines*/
main(){
    int c, blanks, tabs, nl;

    nl = 0;
    while((c = getchar()) != EOF) {
        if (c == '\n'){
            ++nl;
        }
        if (c == ' '){
            ++blanks;
        }
        if (c == '\t'){
            ++tabs;
        }   
    }
    printf("Blanks: %d\n Tabs: %d\n Newlines: %d\n", blanks, tabs, nl);
}

// Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
int main(void) {
    int c;
    int last_c = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ' || last_c != ' ') {
            putchar(c);
        }
        last_c = c;
    }

    return 0;
}

// Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, 
// each backspace by \b, and each backslash by \\.
// This makes tabs and backspaces visible in an unambiguous way
int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(c);
        }
    }

    return 0;
}

