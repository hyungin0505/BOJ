#include <stdio.h>

int main(void) {
    
    char word[101] = {0};

    scanf("%s", &word);
    int end;

    for (int x=0;x<101;x++) {
        if (word[x] == 0) {
            end = x;
            break;
        }
    }

    int set = 0;
    int num;

    // 97에서 122
    for (int i=0;i<26;i++) {
        for (int k=0;k<end;k++) {
            set = 0;
            int tester = 97+i;
            if ((char)tester == word[k]) {
                num = k;
                set = 1;
                break;
            }
        }
        if (set == 1) {
            printf("%d ", num);
        }
        else {
            printf("-1 ");
        }
    }

    return 0;

}