#include <stdio.h>

int main(void) {

    char word[101] = {0};

    scanf("%s", &word);

    int i = 0;
    while (word[i] != 0) {
        if (word[i] == 99) { //c
            if (word[i+1] == 61 || word[i+1] == 45) {
                word[i+1] = 0;
                i++;
            }
        }
        else if (word[i] == 100) { // dz=, d-
            if (word[i+1] == 122) { //dz=
                if (word[i+2] == 61) {
                    word[i+1] = 0;
                    word[i+2] = 0;
                    i++;
                    i++;
                }
            }
            else if (word[i+1] == 45) { //d-
                word[i+1] = 0;
                i++;
            }
        }
        else if (word[i] == 108) { //lj
            if (word[i+1] == 106) {
                word[i+1] = 0;
                i++;
            }
        }
        else if (word[i] == 110) { //nj
            if (word[i+1] == 106) {
                word[i+1] = 0;
                i++;
            }
        }
        else if (word[i] == 115) { //s=
            if (word[i+1] == 61) {
                word[i+1] = 0;
                i++;
            }
        }
        else if (word[i] == 122) { //z=
            if (word[i+1] == 61) {
                word[i+1] = 0;
                i++;
            }
        }
        i++;
    }

    int result = 0;
    for (int k=0;k<101;k++) {
        if (word[k] != 0) {
            result++;
        }
    }
    printf("%d", result);
    
    return 0;
} 