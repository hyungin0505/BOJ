#include <stdio.h>
int fact(int);

int main(void) {

    int a, b, c, n;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int A = fact(a);
    int B = fact(b);
    int C = fact(c);
    int N = fact(n);
    printf("%d", N/(A*B*C));

    return 0;
}

int fact(int x) {
    int k = 1;
    for (int i=0;i<x;i++) {
        k = k * (i+1);
    }
    return k;
}