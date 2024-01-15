#include <stdio.h>

int main(void) {

    int matrix[10][10];

    for (int i=0;i<9;i++) {
        for (int j=0;j<9;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int max = matrix[0][0];
    int max_i = 0, max_j = 0;
    for (int i=0;i<9;i++) {
        for (int j=0;j<9;j++) {
            if (max < matrix[i][j]) {
                max = matrix[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d", max_i+1, max_j+1);

    return 0;
} 