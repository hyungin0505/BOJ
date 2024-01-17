#include <stdio.h>

int main(void) {

    char word[101] = {0};

    scanf("%s", &word);

    int end;
    for (int i=0;i<101;i++) {
        if (word[i] == 0) {
            end = i;
            break;
        }
    }
    for (int x=0;x<end;x++) {
        if (word[0+x] != word[end-x-1]) {
            printf("0");
            return 0;
        }
    }
    

    printf("1");
    return 0;
} 