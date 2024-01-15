#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n, m;
    int * basket;

    scanf("%d %d", &n, &m);
    basket = malloc(n * sizeof(int));

    for (int x=0;x<n;x++) {
        basket[x] = x+1;
    }
    for (int y=0;y<m;y++) {\
        int i, j;
        int tmp = 0;
        scanf("%d %d", &i, &j);
        tmp = basket[i-1];
        basket[i-1] = basket[j-1];
        basket[j-1] = tmp;
    }

    for (int z=0;z<n;z++) {
        printf("%d ", basket[z]);
    }


    return 0;
}