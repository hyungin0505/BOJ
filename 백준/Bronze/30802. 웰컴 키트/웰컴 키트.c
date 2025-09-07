#include <stdio.h>

int main(void) {
    int N;
    int size[6] = {0, };
    int T, P = 0;
    int result = 0;

    scanf("%d", &N);
    for (int i=0; i<6; i++) scanf("%d", &size[i]);
    scanf("%d %d", &T, &P);

    for (int j=0; j<6; j++) {
        if (size[j] != 0) result += (size[j]-1)/T + 1;
    }
    printf("%d\n", result);
    printf("%d %d", N/P, N%P);

    return 0;
}