#include <stdio.h>

int main(void) {
    int n, v;

    scanf("%d", &n);

    int list[100] = {};

    for (int i=0;i<n;i++) {
        scanf("%d", &list[i]);
    }

    scanf("%d", &v);

    int result = 0;

    for (int k=0;k<n;k++) {
        if (list[k] == v) {
            result++;
        }
    }

    printf("%d", result);
}