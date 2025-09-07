#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long power(int num, int pow) {
    long long result = 1;

    for (int j=0; j<pow; j++) result = (result * num) % 1234567891;

    return result;
}

int main(void) {
    int length = 0;
    char *string; 
    long long result = 0;

    scanf("%d", &length);

    string = malloc(sizeof(char)*(length+1));
    memset(string, 0, length);
    scanf("%s", string);

    for (int i=0; i<length; i++) {
        result += ((string[i] - 'a' + 1) * power(31, i))%1234567891;
        result %= 1234567891;
    }
    printf("%lld", result % 1234567891);

    return 0;
}