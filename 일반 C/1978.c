#include <stdio.h>

int main(void) {

    int n;
    int num[101] = {0};
    scanf("%d", &n);

    for (int x=0;x<n;x++) {
        scanf("%d", &num[x]);
    }

    int result = 0;
    for (int i=0;i<n;i++) {
        int res = 0;
        for (int y=num[i]-1;y>1;y--) {
            if (num[i]%y == 0){
                res = 1;
            }
        }
        if (res != 1 && num[i] != 1) {
            result++;
        }
    }

    printf("%d", result);

    return 0;
} 