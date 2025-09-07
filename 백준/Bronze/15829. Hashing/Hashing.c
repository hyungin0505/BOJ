#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long power(int num, int pow) {
    int result = 1;

    for (int j=0; j<pow; j++) result *= num;

    return result;
}

int main(void) {
    int length = 0;
    char *string; 
    long long result = 0;

    scanf("%d", &length);

    string = malloc(sizeof(char)*length);
    memset(string, 0, length);
    scanf("%s", string);

    for (int i=0; i<length; i++) {
        result += (string[i] - 'a' + 1) * power(31, i);
    }
    printf("%lld", result % 1234567891);

    return 0;
}