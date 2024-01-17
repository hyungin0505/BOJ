#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int * list;
    int n, m ;

    scanf("%d %d", &n, &m);
    list = malloc(n * sizeof(int));
    for (int z=0;z<n;z++) {
        list[z]=0;
    }
    for (int x=0;x<m;x++) { 
        int i, j, k ;
        scanf("%d %d %d",&i, &j, &k);
        for (int y=i-1;y<j;y++){
            list[y]=k;
        }
    }
    for (int h=0;h<n;h++) {
        printf("%d ", list[h]);
    }


    return 0;
}