#include <stdio.h>
int main(void) {
    int num[10];

    for (int i=0;i<10;i++) {
        scanf("%d", &num[i]);
        num[i] = num[i] % 42;
    }

    int tmp = 0;

    for (int x=0;x<10;x++) {
        for (int y=x;y<10;y++) {
            if (num[x] > num[y]) {
                tmp = num[x];
                num[x] = num[y];
                num[y] = tmp;
            }
        }
    }

    int result = 0;
    for (int y=0;y<9;y++) {
        if (num[y] == num[y+1]) {
            result = result + 1;
        }
    }
    
    printf("%d", 10 - result);
    return 0;
}