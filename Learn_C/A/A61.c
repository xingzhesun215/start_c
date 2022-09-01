#include <stdio.h>
#include <string.h>

/**
字符串排序
*/
int main1() {
    char str[10][50], temp[50];
    printf("输入10个单词:");
    for (int k = 0; k < 10; ++k) {
        scanf("%s[^\n]", str[k]);
    }

    for (int i = 0; i < 9; ++i) {
        for (int j = i; j < 10; ++j) {
            if (strcmp(str[i], str[j])>0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }

        }
    }
    printf("排序后输出:\n");
    for (int l = 0; l < 10; ++l) {
        puts(str[l]);
    }

    return 0;
}