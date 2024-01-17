#include <stdio.h>

int main(void) {

    int n;
    scanf("%d", &n);

    for (int i=0;i<n-1;i++) {
        for (int x=n-i-1;x>0;x--) {
            printf(" ");
        }
        for (int y=0;y<i*2+1;y++) {
            printf("*");
        }
        printf("\n");
    }

    for (int y=0;y<n*2-1;y++) {
            printf("*");
    }
    printf("\n");

    for (int i=0;i<n-1;i++) {
        for (int h=0;h<i+1;h++) {
            printf(" ");
        }
        for (int k=0;k<(n-i)*2-3;k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
} 