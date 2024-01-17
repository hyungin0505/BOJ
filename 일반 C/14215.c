#include <stdio.h>

int main(void) {

    int tri[3] = {0};
    
    scanf("%d %d %d", &tri[0], &tri[1], &tri[2]);
    for (int y=0;y<2;y++) {
        int tmp = 0;
        if (tri[y] > tri[y+1]) {
            tmp = tri[y];
            tri[y] = tri[y+1];
            tri[y+1] = tmp;
        }
    }
    while (tri[2] >= tri[1] + tri[0]) {
        tri[2]--;
    }
    printf("%d", tri[0] + tri[1] + tri[2]);



    return 0;
}