#include <stdio.h>

int main(void) {
    
    int n, minx, miny, maxx, maxy;
    scanf("%d", &n);
    
    int a, b;
    scanf("%d %d", &a, &b);
    minx = a;
    miny = b;
    maxx = a;
    maxy = b;

    for (int x=1;x<n;x++) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a<minx) minx = a;
        if (a>=maxx) maxx = a;
        if (b<miny) miny = b;
        if (b>=maxy) maxy = b;
    }

    printf("%d", (maxx-minx)*(maxy-miny));

    return 0;
}