#include <stdio.h>

int main(void) {
    
    int n, minx=0, miny=0, maxx=0, maxy=0;
    scanf("%d", &n);

    for (int x=0;x<n;x++) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a<minx) minx = a;
        else maxx = a;
        if (b<miny) miny = b;
        else maxy = b;
    }

    printf("%d", (maxx-minx)*(maxy-miny));

    return 0;
}