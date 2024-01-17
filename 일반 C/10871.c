#include <stdio.h>

int main(void) {
    int n ,x;
    scanf("%d %d", &n, &x);

    int list[10000];

    for (int i=0;i<n;i++) {
        scanf("%d", &list[i]);
    }
    int result = 0;
    for (int k=0;k<n;k++) {
        if (list[k] < x) {
            printf("%d ", list[k]);
        }
    }
}