#include <stdio.h>

int main(void) {
    int a,b,c,d,e, x1, x2;

    scanf("%d %d", &x1, &x2);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int result = (a/3)*x2*x2*x2 + ((b-d)/2)*x2*x2 + (c-e)*x2 - ((a/3)*x1*x1*x1 + ((b-d)/2)*x1*x1 + (c-e)*x1);
    printf("%d", result);

    return 0;

}