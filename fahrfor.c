//
// Created by Aleksey Prozorov on 28.10.2021.
//

#include <stdio.h>

int fahrfor2() {
    int fahr;

    for(fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
}


