#include <stdio.h>

int main(void) {
    int T;
    int k, n;
    long long temp;
    long long arr[17][15] = {1, };

    for (int k=1; k<17; k++) {
        for (int i=1; i<15; i++) {
            temp = 0;
            for (int j=0; j<=i; j++) {
                temp += arr[k-1][j];
            }
            arr[k][i] = temp;
        }
    }

    scanf("%d", &T);
    
    for (int h=0; h<T; h++) {
        scanf("%d %d", &k, &n);
        printf("%lld\n", arr[k+2][n]);
    }

    return 0;
}