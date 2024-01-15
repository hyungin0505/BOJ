#include <stdio.h>

int main(void) {

    char word[1000];
    for (int i=0;i<1000;i++) {
        word[i] = 0;
    }

    scanf("%s", &word);
    for (int i=0;i<1000;i++) {
        if (word[i] == 0) {
            printf("%d", i);
            return 0;
        }
    }

}