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