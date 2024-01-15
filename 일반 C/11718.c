#include <stdio.h>

int main(void) {

    char result[300][101] = {0, };

    char ch ;
    int j = 0;
    while (1) {

        char sent[101] = {0};
        scanf("%[^\n]s", &sent);

        if((ch = getchar()) == EOF) {
            break;
        }

        int k=0;
        while (sent[k] != 0) {
            result[k][j] = sent[k];
            k++;
        }
        j++;
    }
    int n = 0;
    while (result[0][n] != 0) {
        int m = 0;
        while (result[m][n] != 0) {
            printf("%c", result[m][n]);
            m++;
        }
        printf("\n");
        n++; 
    }

    return 0;
}