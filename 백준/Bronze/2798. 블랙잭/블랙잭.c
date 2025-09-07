#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N, M = 0;
    int result, sum;

    scanf("%d %d", &N, &M);
    result = M;

    int *card = malloc(sizeof(int) * N);
    for (int i=0; i<N; i++) {
        scanf("%d", card+i);
    }

    for (int ii=0; ii < N-2; ii++) {
        for (int iii=ii+1; iii < N-1; iii++) {
            for (int iv = iii+1; iv < N; iv++) {
                sum = card[ii]+card[iii]+card[iv];
                if ((M-sum <= result) & (sum <= M)) result = M-sum;
            }
        }
    }

    printf("%d", M-result);

    return 0;
}