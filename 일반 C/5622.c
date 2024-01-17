#include <stdio.h>

int main(void) {
    
    char word[16] = {0};

    scanf("%s", &word);

    int i=0;
    int time = 0;
    while (word[i]!=0) {
        if (word[i] == 87 || word[i] == 88 || word[i] == 89 || word[i] == 90) { // WXYZ
            time = time + 10;
        }
        else if (word[i] == 84 || word[i] == 85 || word[i] == 86) { // TUV
            time = time + 9;
        }
        else if (word[i] == 80 || word[i] == 81 || word[i] == 82 || word[i] == 83) { // PQRS
            time = time + 8;
        }
        else { // etc.
            time = time + ((word[i]+1)/3)-19;
        }
        i++;
    }
    printf("%d", time);

    return 0;
}