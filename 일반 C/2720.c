#include <stdio.h>

int main(void) {

    int t;
    scanf("%d", &t);

    for (int k=0;k<t;k++) {
        int c;
        scanf("%d", &c);

        int q, d, n, p;
        int rest = 0;

        q = c / 25;
        rest = c % 25;

        d = rest / 10;
        rest = rest % 10;

        n = rest / 5;
        rest = rest % 5;

        p = rest;

        printf("%d %d %d %d", q, d, n, p);
        printf("\n");
    }

    return 0;
} 