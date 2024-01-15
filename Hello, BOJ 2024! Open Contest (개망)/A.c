#include <stdio.h>
#include <stdlib.h>

int result;
int n, k;

int main(void) {
    scanf("%d %d", &n, &k);

    int* a = (int*)malloc(sizeof(int)*n);
    int* b = (int*)malloc(sizeof(int)*n);

    for (int i=n-1;i!=0;i--) {
        scanf("%d %d", &a[i], &b[i]);
    }
    int count;
    int test = 0;

    int x=0;
    while (1) {
        count = 0;
        for (int j=0;j<n;j++) {
            if (a[j]+x >= b[j]) {
                count++;
            }
            if (count-k >= 0) {
                test = 1;
                break;
            }
        }
        if (test-1 == 0) {
            printf("%d", x);
            return 0;
        }
        x++;
    }
}