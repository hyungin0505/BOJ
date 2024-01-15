#include <stdio.h>

int main(void) {
    int n;
    long long int a,b,c;

    scanf("%d", &n);

    long long int list[] = {-1,1,1};
    for (int i=1;i<n;i++) {
        a = list[0] + list[2]*(-1);
        b = list[1] + list[2];
        c = list[0]*2 + list[1]*(-2) + list[2];

        list[0]=a; list[1]=b; list[2]=c;
    }
    printf("%lld", list[0] + list[1] + list[2]);

    return 0;
}