#include <stdio.h>
#include <string.h>

/**
连接字符串
*/
int main1() {
    char str1[100];
    printf("输入一串字符\n");
    scanf("%s", str1);

    char str2[100];
    printf("输入一串字符\n");
    scanf("%s", str2);

    char *str3 = strcat(str1, str2);
    printf("合并后%s", str3);

}







