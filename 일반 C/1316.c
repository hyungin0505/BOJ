#include <stdio.h>

int main(void) {

    int n;
    scanf("%d", &n);

    int result = 0;
    for (int i=0;i<n;i++) {

        char word[201] = {0};
        scanf("%s", &word);

        char alpha[27] = {0};

        int set = 0;

        int x = 0;
        while (word[x] != 0) {
            
            if(alpha[(int)word[x]-96] == 0) {
                alpha[(int)word[x]-96] = 1;\
                x++;
            }
            else if (alpha[(int)word[x]-96] == 1) {
                if (word[x-1] == word[x]) {
                    x++;
                }
                else {
                    set = 1;
                    break;
                }
            }
        }


        if (set == 0) {
            result ++;
        }
    }
    printf("%d", result);

    return 0;
} 