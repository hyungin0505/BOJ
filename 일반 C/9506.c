#include <stdio.h>

int main(void) {

    int n=0;
    while (n != (-1)) {
        scanf("%d", &n);
        int fact[1000] = {0};
        int sum=0;
        int j=0;
        for (int k=0;k<n;k++) {
            if (n%(k+1) == 0) {
                fact[j] = k+1;
                sum+=fact[j];
                j++;
            }
        }
        if (n==-1) {
            return 0;
        }
        else if (sum-fact[j-1] == n) {
            printf("%d = %d", n, fact[0]);
            for (int z=0;z<j-2;z++) {
                printf(" + %d", fact[z+1]);
            }
            printf("\n");
        }
        else {
            printf("%d is NOT perfect.\n", n);
        }
    }
} 