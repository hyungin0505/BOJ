#include <stdio.h>

int main(void) {

    int n, m;
    scanf("%d %d", &n, &m);

    int card[101] = {0};
    int min[120000] = {-1};

    for (int x=0;x<n;x++) {
        scanf("%d", &card[x]);
    }

    int num = 0;
    for (int i=0;i<n-2;i++) {
        for (int j=i+1;j<n-1;j++) {
            for (int k=j+1;k<n;k++) {
                int count = card[i] + card[j] + card[k];
                if (m-count < 0) min[num] = -1;
                else min[num] = m-count;
                num++;
            }
        }
    }

    int mini;
    int z = 0;
    while (1) {
        if (min[z] >= 0) {
            mini = min[z];
            break;
        }
        z++;
    }

    for (int h=0;h<num;h++) {
        if (min[h] >= 0 && min[h] < mini) mini = min[h];
    }

    printf("%d", m-mini);

    return 0;
}