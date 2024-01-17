#include <stdio.h>

int main(void) {

    int n, m;

    scanf("%d %d", &n, &m);

    int basket[100];

    for (int c=0;c<100;c++) {
        basket[c] = c+1;
    }

    for (int k=0;k<m;k++) {
        int i, j;
        scanf("%d %d", &i, &j);
        i--;j--;
        for (int h=0;h<((j-i)/2)+1;h++) {
            int tmp = basket[i+h];
            basket[i+h] = basket[j-h];
            basket[j-h] = tmp;
        }
    }

    for (int y=0;y<n;y++) {
        printf("%d ", basket[y]);
    }

    return 0;
}