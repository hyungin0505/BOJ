#include <stdio.h>
int main(void) {

    int a,max;
    scanf("%d", &max);
    int num = 1;
    for (int i=0;i<8;i++) {
        scanf("%d", &a);
        if (a > max) {
            max = a;
            num = i+2;
        }
    }
    printf("%d\n", max);
    printf("%d", num);

    return 0;
}