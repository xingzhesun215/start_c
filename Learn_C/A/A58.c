#include <stdio.h>

/**
查找字符在字符串中出现的次数
*/
int main1() {
    char str[1000], ch;
    int i, frequency = 0;

    printf("输入字符串: ");
    fgets(str, (sizeof str / sizeof str[0]), stdin);
//    scanf("%s",str);//这句语句有问题

    printf("输入要查找的字符: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++frequency;
    }

    printf("字符 %c 在字符串中出现的次数为 %d", ch, frequency);

    return 0;
}