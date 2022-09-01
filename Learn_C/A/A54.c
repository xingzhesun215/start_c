#include <stdio.h>
#include <stdlib.h>

/**
通过用户输入指定的数值，来判断最大值。
*/
int main() {

    int num;
    float *data;
    printf("输入元素个数(1-100):\n");
    scanf("%d", &num);
//    data = (float *) calloc(num, sizeof(float));//为num个元素分配内存
    data = (float *) malloc(num* sizeof(float));//为num个元素分配内存
    printf("下面开始输入\n");
    for (int j = 0; j < num; ++j) {
        printf("当前%d\n", j + 1);
        scanf("%f", data + j);
    }

    printf("\n");
    float max = *data;
    for (int i = 0; i < num; ++i) {
        max = max > *(data + i) ? max : *(data + i);
    }

    printf("最大值为%f", max);
    free(data);

}







