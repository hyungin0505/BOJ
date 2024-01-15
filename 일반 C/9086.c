#include <stdio.h>

int main(void) {

    int t;

    scanf("%d", &t);

    for (int i=0;i<t;i++) {
        char word[1000];
        for (int x=0;x<1000;x++) {
            word[x] = 0;
        }
        scanf("%s", &word);
        for (int x=0;x<1000;x++) {
            if (word[x] == 0) {
                printf("%c", word[0]);
                printf("%c\n", word[x-1]);
                break;
            }
        }
    }
    return 0;

}