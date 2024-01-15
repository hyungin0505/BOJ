#include <stdio.h>

int main(void){
    int a, b, c;

    scanf("%d %d %d",&a,&b,&c);
    
    if (a == b && b == c) {
        printf("%d", 10000+a*1000);
    }
    else if (a != b && b != c && c != a) {
        if (a>b) {
            if (a>c) {
                printf("%d", a*100);
            }
            else {
                printf("%d", c*100);
            }
        }
        else if (b>c) {
            if (b>a) {
                printf("%d", b*100);
            }
            else {
                printf("%d", a*100);
            }
        }
        else if (c>a) {
            if (c>b) {
                printf("%d", c*100);
            }
            else {
                printf("%d", b*100);
            }
        }
    }
    else {
        if (a==b) {
            printf("%d", 1000+a*100);
        }
        if (b==c) {
            printf("%d", 1000+b*100);
        }
        if (c==a) {
            printf("%d", 1000+c*100);
        }
    }

    return 0;
}