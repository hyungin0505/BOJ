#include <stdio.h>

int main(void) {

    int a1, a0, c, n0;
    scanf("%d %d\n%d\n%d", &a1, &a0, &c, &n0);

    if (c>=a1) {
        if (a1*n0+a0 <= c*n0 ) printf("1");
        else printf("0");
    }
    else printf("0"); 
    return 0;
}