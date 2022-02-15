//
// Created by Aleksey Prozorov on 15.02.2022.
//

#include <stdlib.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point pt1;
    struct point pt2;
};

struct point makepoint(int x, int y) {
    struct point temp;

    temp.x = x;
    temp.y = y;
    return temp;
}

struct point addpoint(struct point p1, struct point p2) {
    p1.x += p2.x;
    p1.y += p2.y;
    return p1;
}

struct key {
    char *word;
    int count;
} keytab[] = {
        {"auto", 0},
        {"break", 0},
        "case", 0
};

struct tnode {
    char *word;
    int count;
    struct  tnode *left;
    struct  tnode *right;
};

void doit()  {
    struct point maxpt = { 320, 200};
    printf("%d,%d", maxpt.x, maxpt.y);
    double dist, sqrt(double);
    dist = sqrt((double) maxpt.x * maxpt.x + (double) maxpt.y
                + maxpt.y);
    printf("\ndist = %f\n", dist);

    struct rect screen;
    struct point middle;
    struct point makepoint(int, int);

    screen.pt1 = makepoint(0, 0);
    screen.pt2 = makepoint(1000, 1000);
    middle = makepoint(
            (screen.pt1.x + screen.pt2.x) / 2,
            (screen.pt1.y + screen.pt2.y) / 2
    );

    struct point *pp;
    pp = &maxpt;
    printf("%d,%d\n", (*pp).x, (*pp).y);
    printf("%d,%d\n", pp->x, pp->y);

    int t = sizeof keytab / sizeof (struct key);
    printf("%d\n", t);

    struct tnode right = {"a", 2,
            NULL, NULL};
    struct tnode left = {"c", 3,
                          NULL, NULL};


    struct tnode test = {
            "b",
            1,
            &right,
            &left
    };

    printf("node: current %s, left %s, right %s",
           test.word,
           test.left->word,
           (*test.right).word);
}

typedef struct tnode_ext *Treeptr;

struct tnode_ext {
    char *word;
    int count;
    Treeptr left;
    Treeptr right;
};

void doit2 () {
    typedef int Lenght;

    Lenght len, maxlen;
    len = 1;
    maxlen = 2;
    printf("%d, %d \n", len, maxlen);

    struct tnode_ext t1 = {"d", 3, NULL, NULL};
    Treeptr right = &t1;
    Treeptr left = malloc(sizeof (struct tnode_ext));
    left->word = "a";
    Treeptr middle = malloc(sizeof (struct tnode_ext));
    middle->word = "b";
    middle->left = left;
    middle->right = right;

    printf("node: current %s, left %s, right %s",
           middle->word,
           middle->left->word,
           middle->right->word);

}

union u_utag {
    int ival;
    float  fval;
    char *sval;
} u;

void doit3 () {
    u.ival = 13;

    printf("%d \n", u);
}