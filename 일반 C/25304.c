#include <stdio.h>

int main(void) {
    int x, n ,a, b;
    int k = 0;

    scanf("%d", &x);
    scanf("%d", &n);

    for (int i=0;i<n;i++) {
        scanf("%d %d", &a, &b);
        k = k + a*b;
    }
    if (k==x) {
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}