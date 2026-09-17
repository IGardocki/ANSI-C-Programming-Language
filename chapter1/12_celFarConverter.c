#include <stdio.h>

/* Print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300*/

/*original code*/
main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; /*lower limit of temp scale*/
    upper = 300; /*upper limit of temp scale*/
    step = 20; /*step size*/

    fahr = lower;

    /*Exercise 1-3: Include a heading*/
    printf("F TO C CONVERSION TABLE\n")

    while(fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        /*Exercise 1-4: Print C to F table*/
        printf("%3.1f\t%6.0f\n", celsius, fahr);

        /*original code below*/
        /*printf("%3.0f\t%6.1f\n", fahr, celsius);*/
        fahr = fahr + step;
    }
}

main(){
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20){
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }

    /*Exercise 1-5: Modify the temp conversion program to print table in reverse order, from 300 degrees to 0*/
    for (fahr = 300; fahr >= 0; fahr = fahr - 20){
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }
}

/*1.4 Symbolic Constants*/
#include <stdio.h>

#define LOWER 0 /*lower limit of table*/
#define UPPER 300 /*upper limit of table*/
#define STEP 20 /*step size*/

main() {
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
        print("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
}