#include <stdio.h>
#include <string.h>

/**
删除字符串中的特殊字符
*/
int main1() {
    char str[150];

    printf("输入一串字符\n");

    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; ++i) {
        char c = str[i];
        if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= "Z")) {
            for (int j = i; j < len; ++j) {
                str[j] = str[j + 1];
            }
            len--;
            i--;
        }
    }

    printf("打印输出\n%s", str);

}







