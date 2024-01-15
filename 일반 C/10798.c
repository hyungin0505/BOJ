#include <stdio.h>

int main(void) {

    char word1[17] = {0};
    scanf("%s", &word1);

    char word2[17] = {0};
    scanf("%s", &word2);

    char word3[17] = {0};
    scanf("%s", &word3);

    char word4[17] = {0};
    scanf("%s", &word4);

    char word5[17] = {0};
    scanf("%s", &word5);

    for (int y=0;y<17;y++) {
        if (word1[y] == 0) {
            printf("");
        }
        else {
            printf("%c", word1[y]);
        }
        if (word2[y] == 0) {
            printf("");
        }
        else {
            printf("%c", word2[y]);
        }
        if (word3[y] == 0) {
            printf("");
        }
        else {
            printf("%c", word3[y]);
        }
        if (word4[y] == 0) {
            printf("");
        }
        else {
            printf("%c", word4[y]);
        }
        if (word5[y] == 0) {
            printf("");
        }
        else {
            printf("%c", word5[y]);
        }
    }
    

    return 0;
} 