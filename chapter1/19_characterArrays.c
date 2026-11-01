// #include <stdio.h>
//
// #define MAXLINE 1000 /* maximum input line length */
//
// /* Renamed to get_line to prevent collision with POSIX stdio getline() */
// int get_line(char s[], int lim);
// void copy(char to[], const char from[]);
//
// /* print the longest input line */
// int main(void)
// {
//     int len;               /* current line length */
//     int max;               /* maximum length seen so far */
//     char line[MAXLINE];    /* current input line */
//     char longest[MAXLINE]; /* longest line saved here */
//
//     max = 0;
//     while ((len = get_line(line, MAXLINE)) > 0) {
//         if (len > max) {
//             max = len;
//             copy(longest, line);
//         }
//     }
//
//     if (max > 0) { /* there was at least one line */
//         printf("%s", longest);
//     }
//
//     return 0;
// }
//
// /* get_line: read a line into s, return length */
// int get_line(char s[], int lim)
// {
//     int c;
//     int i;
//
//     for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
//         s[i] = (char)c;
//     }
//
//     if (c == '\n') {
//         s[i] = (char)c;
//         ++i;
//     }
//
//     s[i] = '\0';
//     return i;
// }
//
// /* copy: copy 'from' into 'to'; assume to is big enough */
// void copy(char to[], const char from[])
// {
//     int i = 0;
//
//     while ((to[i] = from[i]) != '\0') {
//         ++i;
//     }
// }

// Exercise 1-16. Revise the main routine of the longest-line program so it will correctly
// print the length of arbitrary long input lines, and as much as possible of the text.
#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

/* Renamed to get_line to prevent collision with POSIX stdio getline() */
int get_line(char s[], int lim);
void copy(char to[], const char from[]);

/* print the longest input line */
int main(void)
{
    int len;               /* current line length */
    int max;               /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) { /* there was at least one line */
        printf("length: %i\n", max);
        printf("%s\n", longest);
    }

    return 0;
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim)
{
    int c;
    int i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = (char)c;
    }

    if (c == '\n') {
        s[i] = (char)c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], const char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
