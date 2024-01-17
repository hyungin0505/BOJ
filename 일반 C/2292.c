#include <stdio.h>

int main(void) {
    
    int n;
    scanf("%d", &n);

    if (n == 1) {
        printf("1");
    }
    else {
        int k=1, i=2, j=2;
        while (n<i || n>=j) {
            i = j, j=j+6*k;
            k++;
        }
        printf("%d", k);
    }

    return 0;
} 