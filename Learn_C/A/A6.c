#include <stdio.h>

/**
 * 使用 scanf() 来接收输入， printf() 与 %d 格式化输出整数。
 */
int main() {
    int fisrtNum, secondNum, sumOfNum;
    printf("输入2个整数(空格分割)\n");
    scanf("%d %d", &fisrtNum, &secondNum);
    sumOfNum = fisrtNum + secondNum;
    printf("%d + %d = %d",fisrtNum,secondNum,sumOfNum);

    return 0;
}
