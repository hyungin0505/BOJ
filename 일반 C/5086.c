#include <stdio.h>

int main(void) {

    int test[100] = {0};

    int i = 0;
    int k =0;

    while (i==0) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) {
            i = 1;
        }
        if (a > b) {
            if (a%b == 0) {
                test[k] = 2;
            }
            else {
                test[k] = 3;
            }
        }
        else if (a < b) {
            if (b%a == 0) {
                test[k] = 1;
            }
            else {
                test[k] = 3;
            }
        }
        k++;
    }

    for (int j=0;j<k-1;j++) {
        if (test[j] == 1) {
            printf("factor\n");
        }
        else if (test[j] == 2) {
            printf("multiple\n");
        }
        else {
            printf("neither\n");
        }
    }
    
    return 0;
} 