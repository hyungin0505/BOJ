#include <stdio.h>

int main(void) {

    int n,k;
    int factor[10000] = {0};

    scanf("%d %d", &n, &k);
    
    int t=0;
    for (int i=0;i<n;i++) {
        if (n%(i+1)==0) {
            factor[t] = i+1;
            t++;
        }
    }
    printf("%d", factor[k-1]);

    return 0;
} 