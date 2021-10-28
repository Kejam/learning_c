//
// Created by Aleksey Prozorov on 28.10.2021.
//

#include <stdio.h>

int countchar() {
    int c, count;

    count = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t') c = '\b';
        if (c == '/') c = '\\';
        putchar(c);
    }


    return 0;
}

