#include <stdio.h>

int main(void) {
    int n;
    float sub[1000];

    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d", &sub[i]);
    }

    float max = sub[0];

    for (int k=0;k<n-1;k++) {
        if (max < sub[k+1]) {
            max = sub[k+1];
        }
    }

    float result = 0; 
    for (int p=0;p<n;p++) {
        result = result + sub[p]/max;
    }

    printf("%f", result*100/n);


    return 0;
}