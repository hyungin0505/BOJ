#include <stdio.h>

int main(void) {
    
    int n;
    scanf("%d", &n);

    if (n == 1) {
        printf("1/1");
    }
    else {
        int k=0, i=2, j=4;
        while (n<i || n>=j) {
            k++;
            i = i+k+1, j = j+k+2;
        }
        if (k%2 == 0) {
            printf("%d/%d", n-i+1, k-n+i+2);
        }
        else {
            printf("%d/%d", k-n+i+2, n-i+1);
        }
    }
    
    return 0;
} 