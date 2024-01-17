#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=1;i<n+1;i++) {
        for (int k=0;k<n-i;k++) {
            printf(" ");
        }
        for (int p=0;p<i;p++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}