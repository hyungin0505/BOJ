#include <stdio.h>
#include <math.h>

int main(void) {

    int b;
    char number[50] = {0};

    scanf("%s", &number);
    scanf("%d", &b);

    int k=0;
    int end = 0;
    while (number[k] != 0) {
        end = k;
        k++;
    }
    end += 2;

    int result = 0;

    for (int h=0;h<end-1;h++) {
        if (number[h] < '=') {
            result = result + ((int)(number[h]-'0'))*pow(b, end-h-2);
        }
        else if (number[h] > '=') {
            result = result + ((number[h]-'7'))*pow(b, end-h-2);
        }
    }

    printf("%d", result);

    return 0;
} 