// #include <stdio.h>
//
// #define MAXLINE 1000
//
// int max;
// char line[MAXLINE];
// char longest[MAXLINE];
//
// int get_line(void);
// void copy(void);
//
// int main(void) {
//     int len;
//     extern int max;
//     extern char longest[];
//
//     max = 0;
//     while ((len = get_line()) > 0) {
//         if (len > max) {
//             max = len;
//             copy();
//         }
//     }
//
//     if (max > 0) {
//         printf("%s", longest);
//     }
//
//     return 0;
// }
//
// int get_line(void) {
//     int c;
//     int i;
//     extern char line[];
//
//     for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
//         line[i] = (char)c;
//     }
//
//     if (c == '\n') {
//         line[i] = (char)c;
//         ++i;
//     }
//
//     line[i] = '\0';
//     return i;
// }
//
// void copy(void) {
//     int i = 0;
//     extern char line[];
//     extern char longest[];
//
//     while ((longest[i] = line[i]) != '\0') {
//         ++i;
//     }
// }

// Exercise 1-20. Write a program detab that replaces tabs in the input with the proper
// number of blanks to space to the next tab stop. Assume a fixed set of tab stops, 
// say every n columns. Should n be a variable or a symbolic parameter?
// #include <stdio.h>
//
// #define TABSTOP 6
//
// int main(void) {
//     int c;
//     int col = 0;
//
//     while ((c = getchar()) != EOF) {
//         if (c == '\t') {
//             int spaces = TABSTOP - (col % TABSTOP);
//             while (spaces > 0) {
//                 putchar(' ');
//                 ++col;
//                 --spaces;
//             }
//         } else if (c == '\n') {
//             putchar(c);
//             col = 0;
//         } else {
//             putchar(c);
//             ++col;
//         }
//     }
//
//     return 0;
// }

// Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum 
// number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab.
// When either a tab or a single blank would suffice to reach a tab stop, 
// which should be given preference?
#include <stdio.h>

#define TABSTOP 2

int main(void) {
    int c;
    int col = 0;
    int spaces = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            spaces++;
            col++;
            if (spaces == TABSTOP) {
                putchar('\t');
                spaces = 0;
            }
        } else if (c == '\n') {
            putchar(c);
            col = 0;
        } else {
            putchar(c);
            ++col;
        }
        
    }

    return 0;
}

 
