#include <stdio.h>
int main(void) {
    int student[30] = {};

    for (int k=0;k<30;k++) {
        student[k] = k+1;
    }
    for (int x=0;x<28;x++) {
        int test;
        scanf("%d", &test);
        student[test-1] = 0;
    }
    for (int y=0;y<30;y++) {
        if (student[y] != 0) {
            printf("%d\n", student[y]);
        }
    }

    return 0;
}