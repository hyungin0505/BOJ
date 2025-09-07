#include <stdio.h>

int main(void) {
    int num[5] = {0,};
    int result = 0;

    for (int i=0; i<5; i++) {
        scanf("%d", &num[i]);
        result += num[i] * num[i];
    }

    printf("%d", result%10);

    return 0;
}