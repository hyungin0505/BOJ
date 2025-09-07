#include <stdio.h>

int main(void) {
    int num1, num2 = 0;
    int factor, multiple = 0;

    scanf("%d %d", &num1, &num2);

    for (int i=1; i <= (num1 < num2 ? num1 : num2); i++) {
        if ((num1 % i == 0) & (num2 % i == 0)) {
            factor = i;
        }
    }
    printf("%d\n", factor);

    multiple = factor;
    while(1) {
        if ((multiple % num1 == 0) & (multiple % num2 == 0)) {
            break;
        }
        multiple += factor;
    }

    printf("%d\n", multiple);

    return 0;
}