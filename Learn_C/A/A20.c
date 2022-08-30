#include <stdio.h>

/**
判断字母
 */
int main1() {
    char c;
    printf("输入一个字符\n");
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("%c是字母");
    } else {
        printf("%c不是字母");
    }
    return 0;
}
