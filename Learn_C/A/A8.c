#include <stdio.h>

/**
 * 字符转 ASCII 码
 */
int main1() {
    printf("输入字符\n");
    char input=getchar();
    //char input;
    //scanf("%c",&input);

    printf("输入的字符为%c\n",input);
    printf("输入的字符的ASC码=%d",input);

    return 0;
}
