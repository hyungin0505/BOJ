#include <stdio.h>

int main(void) {

    float grades=0;
    float subs=0;

    for (int r=0;r<20;r++) {
        char sub[51];
        float score;
        char grade[2];
        scanf("%s %f %s", &sub, &score, &grade);

        if (grade[0]==65) {
            if (grade[1]==43) {
                grades += score * 4.5;
                subs += score;
            }
            else if (grade[1]==48) {
                grades += score * 4.0;
                subs += score;
            }
        }
        else if (grade[0]==66) {
            if (grade[1]==43) {
                grades += score * 3.5;
                subs += score;
            }
            else if (grade[1]==48) {
                grades += score * 3.0;
                subs += score;
            }
        }
        else if (grade[0]==67) {
            if (grade[1]==43) {
                grades += score * 2.5;
                subs += score;
            }
            else if (grade[1]==48) {
                grades += score * 2.0;
                subs += score;
            }
        }
        else if (grade[0]==68) {
            if (grade[1]==43) {
                grades += score * 1.5;
                subs += score;
            }
            else if (grade[1]==48) {
                grades += score * 1.0;
                subs += score;
            }
        }
        else if (grade[0]==70) {
            grades += score * 0;
            subs += score;
        }
    }

    if (subs == 0) {
        printf("0.000000");
    }
    else {
        printf("%f", grades/subs);
    }

    return 0;
} 