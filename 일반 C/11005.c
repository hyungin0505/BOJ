#include <stdio.h>
#include <math.h>

int main(void) {

    int number;
    int b;

    scanf("%d %d", &number, &b);

    int count = 0;

    while ((number / pow(b, count)) > b) {
        count++;
    }

    int quot=0;
    int rest=number;

    if (b == 10) {
        printf("%d", number);
    }
    else if (b == number) {
        printf("10");
    }

    else {
        for (int k=0;k<count+1;k++) {

            quot = rest / pow(b, count-k);
            rest = rest % (int)pow(b, count-k);

            if (quot < 10) {
                printf("%c", quot + 48);
            }
            else {
                printf("%c", quot + 55);
            }
        }
    }

    return 0;
} 