#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, max, min;
    int tmp = 0;
    int * num;
    
    scanf("%d", &n);
    num = malloc(n * sizeof(int));

    for (int i=0;i<n;i++) {
        scanf("%d", &num[i]);
    }
    min = num[0];
    max = num[n-1];
    for (int k=0;k<n;k++) {
        if (min > num[k]) {
            min = num[k];
        }
        else if (max < num[k]) {
            max = num[k];
        }
    }
    printf("%d %d", min, max);
    return 0;
}