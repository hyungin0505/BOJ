#include <stdio.h>

void swap(int *num1, int *num2) {
    int tmp = 0;
    tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}

int power(int num) {
    return num*num;
}

int main(void) {
    int length[3] = {0, };
    int tmp = 0;

    while(1) {
        scanf("%d %d %d", &length[0], &length[1], &length[2]);
        if (length[0]+length[1]+length[2] == 0) break;

        if (length[0] < length[1]) swap(length+0, length+1);
        if (length[0] < length[2]) swap(length+0, length+2);
        if (length[1] < length[2]) swap(length+1, length+2); 

        if (power(length[0]) == power(length[1]) + power(length[2])) {
            printf("right\n");
        }\
        else printf("wrong\n");
    }

    return 0;
}