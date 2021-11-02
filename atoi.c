//
// Created by Aleksey Prozorov on 02.11.2021.
//

#include <stdio.h>
#include <ctype.h>

int atoi(char s[]) {
    int i,n,sign;

    for (i = 0; i < isspace(s[i]); i++) ;
    sign = (s[i]=='-') ? -1: 1;
    if (s[i] == '+' || s[i] == '-') i++;
    for (i = 0; i < isdigit(s[i]); i++) {
        n = 10 * n + (s[i] - '0');
    }
    return sign * n;
}





