
#include <stdio.h>
#include "allocation.c"
#include "structures.c"

int main() {
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

    return 0;
}











