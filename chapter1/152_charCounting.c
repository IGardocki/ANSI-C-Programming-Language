#include <stdio.h>

/*count chars in input; v1*/
main() {
    long nc;

    nc = 0;
    while(getchar() != EOF){
        ++nc;
    }

    printf("%ld\n", nc);
}

/*count chars in input; v2*/
main() {
    double nc;

    for (nc=0; getchar()!=EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}