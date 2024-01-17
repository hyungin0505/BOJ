#include <stdio.h>

int main(void) {
    
    int a1, a2, a3;
    scanf("%d", &a1);
    scanf("%d", &a2);
    scanf("%d", &a3);

    if (a1 == 60 && a2 == 60 && a3 == 60) {
        printf("Equilateral");
    }
    else if (a1 + a2 + a3 == 180) {
        if (a1 == a2 || a2 == a3 || a3 == a1) {
            printf("Isosceles");
        }
        else {
            printf("Scalene");
        }
    }
    else {
        printf("Error");
    }

    return 0;
}