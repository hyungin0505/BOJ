#include <stdio.h>

int main(void) {
    
    int tri[3] = {-1};
    while (1) {
        scanf("%d %d %d", &tri[0], &tri[1], &tri[2]);
        if (tri[0] == 0) break;
        for (int y=0;y<2;y++) {
            int tmp = 0;
            if (tri[y] > tri[y+1]) {
                tmp = tri[y];
                tri[y] = tri[y+1];
                tri[y+1] = tmp;
            }
        }
        if (tri[2] >= tri[0] + tri[1]) printf("Invalid\n");
        else if (tri[0] == tri[1] || tri[1] == tri[2] || tri[2] == tri[0]) {
            if (tri[0] == tri[1] && tri[1] == tri[2]) printf("Equilateral\n");
            else printf("Isosceles\n");
        }
        else printf("Scalene\n");
    }

    return 0;
}