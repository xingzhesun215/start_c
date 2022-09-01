#include <stdio.h>
#include <string.h>

/**
字符串复制
*/
int main1() {
    char src[40];
    char dest[100];
    memset(dest, '\0', sizeof(dest));

    strcpy(src, "hello world ,let's start c");
    strcpy(dest, src);
    printf("原始:%s\n", src);
    printf("复制:%s", dest);

    return 0;
}