//
// Created by Aleksey Prozorov on 01.11.2021.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>

int print_signed_and_unsigned_vars() {
    int b;
    b = sizeof(b);
    printf("size of int variable in mac x86 %d \n", b*8);
    printf("signed int up %d and low %d \n", INT_MAX, INT_MIN);
    printf("unsigned int up %d and low %d \n", UINT_MAX, INT_MIN);
    printf("unsigned char up %d and low %d \n", CHAR_MAX, CHAR_MIN);
    printf("unsigned char up %d and low %d \n", UCHAR_MAX, CHAR_MIN);
    printf("unsigned short up %d and low %d \n", SHRT_MAX, SHRT_MIN);
    printf("unsigned short up %d and low %d \n", USHRT_MAX, SHRT_MIN);
    printf("unsigned long up %ld and low %ld \n", LONG_MAX, LONG_MIN);
    printf("unsigned long up %ld and low %ld \n", ULONG_MAX, LONG_MIN);
    printf("unsigned long up %f and low %f \n", FLT_MAX, FLT_MIN);
    printf("%s \n","d");
    printf("%d \n",'d');
    return 0;
}

