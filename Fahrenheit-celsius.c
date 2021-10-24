//
// Created by Aleksey Prozorov on 24.10.2021.
//
#include <stdio.h>


/*
 * print fahrenheit -> celsius
 */
int fahrenheitcelsius() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}

