//
// Created by Aleksey Prozorov on 08.02.2022.
//
#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allcop = allocbuf;

char *alloc(int n) {
    if (allocbuf + ALLOCSIZE - allcop >= n) {
        allcop += n;
        return allcop - n;
    } else return 0;
}

void afree(char *p) {
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allcop = p;
}
