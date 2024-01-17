#include <stdio.h>

int main(void) {

    int one[101][101], two[101][101] = {-1, };

    int n,m;

    scanf("%d %d", &n, &m);

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            scanf("%d", &one[i][j]);
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            scanf("%d", &two[i][j]);
        }
    }
    
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            printf("%d ", one[i][j] + two[i][j]);
        }
        printf("\n");
    }

    return 0;
} 