#include <stdio.h>

int main(void) {
    
    int n = 0;
    scanf("%d", &n);
    if (n == 1) return 0;

    int prime = 2;
    int result = 1;
    while (1) {
        if (n%prime == 0) {
            printf("%d\n", prime);
            n = n/prime;
            result = result * prime;
        }
        else prime++;
        if (n==1) break;
    }


    return 0;
}