#include <stdio.h>

typedef struct Time {
    int hour;
    int min;
    int sec;
} time;

time diff(time n1, time n2);

/**
复数相加
*/
int main() {
    time n1, n2;

    printf("输入时间1:\n");
    scanf("%d%d%d", &n1.hour, &n1.min, &n1.sec);

    printf("输入时间2:");
    scanf("%d%d%d", &n2.hour, &n2.min, &n2.sec);

    time n3 = diff(n1, n2);

    printf("%d:%d:%d---->%d:%d:%d====%d:%d:%d", n1.hour, n1.min, n1.sec, n2.hour, n2.min, n2.sec, n3.hour, n3.min,
           n3.sec);

    return 0;
}

time diff(time n1, time n2) {
    time result;
    int j_m = 0, j_h = 0;
    if (n1.sec >= n2.sec) {
        result.sec = n1.sec - n2.sec;
    } else {
        result.sec = n1.sec + 60 - n2.sec;
        j_m = 1;
    }
    if (n1.min - j_m >= n2.min) {
        result.min = n1.min - j_m - n2.min;
    } else {
        result.min = n1.min + 60 - j_m - n2.min;
        j_h = 1;
    }

    if (n1.hour - j_h >= n2.hour) {
        result.hour = n1.hour - j_h - n2.hour;
    } else {
        result.hour = n1.hour + 60 - j_h - n2.hour;
    }

    return result;
}