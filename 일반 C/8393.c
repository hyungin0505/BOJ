#include <stdio.h>

#define add(a, b) a+b

int main(void) {
    int n, i;
    int k = 1;
    scanf("%d", &n);
    
    for (i=1;i<n;i++) {
        k = add(k, i+1);
    }

    printf("%d", k);

    return 0;
}

