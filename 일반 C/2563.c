#include <stdio.h>

int main(void) {

    int matrix[100][100] = {0, };

    int paper;
    scanf("%d", &paper);

    int result = 0;
    for (int y=0;y<paper;y++) {
        int i, j;
        scanf("%d %d", &i, &j);
        for (int z=0;z<10;z++) {
            for (int x=0;x<10;x++) {
                if (matrix[i+z][100-j-x] == 0) {
                    matrix[i+z][100-j-x] = 1;
                    result++;
                }
            }
        }
    }

    printf("%d", result);

    return 0;
} 