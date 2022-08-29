#include <stdio.h>

/**
 * if数值比较
 */
int main() {
    printf("输入a\n");
    int a;
    scanf("%d", &a);
    printf("输入b\n");
    int b;
    scanf("%d", &b);
    printf("开始比较");
    if (a > b) {
        printf("a>b");
    } else {
        printf("a<=b");
    }
    return 0;
}
