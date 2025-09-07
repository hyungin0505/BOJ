#include <stdio.h>
#include <string.h>

int main(void) {
    int length;
    int answer;
    char num[100000] = {0, };

    while(1) {
        scanf("%s", num);
        if (!strcmp(num, "0")) break;

        length = strlen(num);
        answer = 1;

        for (int j=0; j<length/2; j++) {
            if (num[j] != num[length-j-1]) {
                answer = 0;
                break;
            }
        }
        if (answer) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}