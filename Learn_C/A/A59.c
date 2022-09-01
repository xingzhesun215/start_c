#include <stdio.h>

/**
字符串中各种字符计算
*/
int main1() {
    char str[100];

    printf("输入一个字符串:");
    scanf("%[^\n]", str);
    int vowels, consonants, digits, spaces;
    vowels = consonants = digits = spaces = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == 'a' || str[i] == 'o' || str[i] == 'e' || str[i] == 'i' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'O' || str[i] == 'E' || str[i] == 'I' || str[i] == 'U') {
            vowels++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] == ' ') {
            spaces++;
        }
    }
    printf("元音: %d", vowels);
    printf("\n辅音: %d", consonants);
    printf("\n数字: %d", digits);
    printf("\n空白符: %d", spaces);

    return 0;
}