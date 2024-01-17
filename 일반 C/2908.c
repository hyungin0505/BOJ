#include <stdio.h>

int main(void) {
    
    int a, b;
    char num1[4] = {0};
    char num2[4] = {0};

    scanf("%s %s", num1, num2);
    
    int tmp;

    char sang1[4] = {0};
    char sang2[4] = {0};

    sang1[0] = num1[2];
    sang1[1] = num1[1];
    sang1[2] = num1[0];

    sang2[0] = num2[2];
    sang2[1] = num2[1];
    sang2[2] = num2[0];

    if ((sang1[0]-'0')*100+(sang1[1]-'0')*10+(sang1[2]-'0')*1 > (sang2[0]-'0')*100+(sang2[1]-'0')*10+(sang2[2]-'0')*1) {
        printf("%s", sang1);
    }
    else {
        printf("%s", sang2);
    }

    return 0;
}