#include <stdio.h>

int power(int, int);

int power(int a, int b) {
    int num = a;
    for (int k=0;k<b-1;k++) {
        num = num * a;
    }
    return num;
}   

int main(void) {
    int n;
    scanf("%d", &n);
    
    int num1;
    num1 =  power(2,n);

    int result;
    result = power(num1+1, 2);
    printf("%d", result);

    return 0;
} 