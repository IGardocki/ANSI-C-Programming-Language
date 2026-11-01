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
//         printf("length: %i\n", max);
//         printf("%s\n", longest);
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

// Exercise 1-17. Write a program to print all input lines that are longer 
// than 80 characters.
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
//     if (max > 80) {
//         printf("length: %i\n", max);
//         printf("%s\n", longest);
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

// Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input,
// and to delete entirely blank lines.
// #include <stdio.h>
//
// #define MAXLINE 1000 /* maximum input line length */
//
// int get_line(char s[], int lim);
// int trim_line(char s[]);
//
// int main(void)
// {
//     char line[MAXLINE];
//     int len;
//
//     while ((len = get_line(line, MAXLINE)) > 0) {
//         if (trim_line(line) > 0) {
//             printf("%s\n", line);
//         }
//     }
//
//     return 0;
// }
//
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
// int trim_line(char s[])
// {
//     int i = 0;
//
//     while (s[i] != '\0') {
//         ++i;
//     }
//     --i;
//
//     while (i >= 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\r')) {
//         --i;
//     }
//
//     if (i >= 0) {
//         ++i;
//         s[i] = '\0';
//     } else {
//         s[0] = '\0';
//         return 0;
//     }
//     return i;
// }
//

// Exercise 1-19. Write a function reverse(s) that reverses the character string s. 
// Use it to write a program that reverses its input a line at a time.
#include <stdio.h>

#define MAXLINE 1000

int get_line(char s[], int lim);
void reverse(char s[]);

int main(void) {
    char line[MAXLINE];

    while (get_line(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s", line);
    }

    return 0;
}

int get_line(char s[], int lim) {
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

void reverse(char s[]) {
    int i = 0;
    int j = 0;
    char temp;

    while (s[j] != '\0') {
        ++j;
    }

    --j;

    if (j >= 0 && s[j] == '\n') {
        --j;
    }

    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        ++i;
        --j;
    }
}
