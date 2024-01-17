#include <stdio.h>

int main(void) {

    int m, n = 0;
    scanf("%d", &m);
    scanf("%d", &n);

    int first[1300] = {-1};
    int result = 0;
    int count = 0;
    for (m=m;m<n+1;m++) {
        int test = 0;
        int i;
        for (i=2;i<m;i++) {
            if (m%i == 0) {
                test = 1;
            } 
        }
        if (test != 1) {
            if (m != 1) {
                result += m;
                first[count] = m;
                count++;
            }
        }
    }
    if (result == 0) {
        printf("-1");
    }
    else {
        printf("%d\n%d", result, first[0]);
    }

    return 0;
} 