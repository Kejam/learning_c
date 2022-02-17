//
// Created by Aleksey Prozorov on 17.02.2022.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


void testscanf();

void readfile();

void doit() {
    system("date");
}

void readfile() {
    char text[20];
    FILE *fp;
    char *filename = "/Users/kejam/CLionProjects/learning-c/text.txt";
    fp = fopen(filename, "r");
    if (fp != NULL) {
        fgets(text, sizeof text, fp);
        printf("File contains: %s", text);
    } else {
        printf("File doesn't exist");
    }
    fclose(fp);
}

void testscanf() {
    int c, b;

    printf("Input integers\n");
    scanf("%d %d", &c, &b);
    printf("Output Integer %d\n", (c+b));
}
