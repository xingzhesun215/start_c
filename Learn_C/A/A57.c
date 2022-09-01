#include <stdio.h>
#include <string.h>

/**
计算字符串长度
*/
int main1() {
    char str1[100];
    printf("输入一串字符\n");
    scanf("%s", str1);

    printf("长度为%d", strlen(str1));
    int count = 0;
    for (int i = 0; str1[i] != '\0'; ++i) {
        count++;
    }

    printf("\n长度为%d", count);
}







