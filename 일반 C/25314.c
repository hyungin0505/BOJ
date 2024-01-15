#include <stdio.h>

int main(void) {
    int t, i, a, b;

    scanf("%d", &t);

    int add[t];

    for (i=0; i<t; i++) {
        scanf("%d %d", &a, &b);
        add[i] = a + b;
    }
    for (i=0; i<t; i++) {
        printf("%d\n", add[i]);
    }

    return 0;
}