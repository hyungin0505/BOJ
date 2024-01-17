#include <stdio.h>

int main(void) {

    char word[1000001] = {0};
    int alpha[26] = {0,};

    scanf("%s", &word);

    int i = 0;
    while (word[i] != 0) {
        if ((int)word[i] > 94) {
            alpha[(int)word[i]-97] += 1;
        }
        else {
            alpha[(int)word[i]-65] += 1;
        }
        i++;
    }

    int max = 0;
    for (int i =0; i< 25;i++) {
        if (alpha[i+1] > alpha[max]) {
            max = i+1;
        }
    }
    int test = 0;
    for (int i =0; i< 26;i++) {
        if (alpha[i] == alpha[max]) {
            test++;
        }
    }
    if (test >= 2) {
        printf("?");
    }
    else {
    printf("%c", max+65);
    }
    return 0;
} 