#include <stdio.h>

int main(void) {
    int n;
    char num[100];
    scanf("%d", &n);
    scanf("%s", &num);

    long long int result = 0;

    for (int i=0;i<n;i++) {
        result = result + num[i]-'0';
    }
    printf("%d", result);

    return 0;

}