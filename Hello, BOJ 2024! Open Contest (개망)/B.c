#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int t;
    scanf("%d", &t);

    int test[100001] = {0};

    for (int i=0;i<t;i++) {
        int n, k;
        scanf("%d %d", &n, &k);

        int v=0, e=0, count=0;
        for (int y=1;y<n+1;y++) {
            for (int x=0;x<y-1;x++) {
                if (n%(x+1) == 0) {
                    if ((x+1)/2==0) e++;
                    else v++;
                }
            }
            if(v*k==e) {
                count++;
            }
        }
        test[i] = count;
    }
    for (int z=0;z<t;z++) {
        printf("%d\n", test[z]);
    }

    return 0;
}