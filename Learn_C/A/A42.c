#include <stdio.h>


/**
 *计算数组元素平均值
 *
*/
int main1() {

    int arr[10]={1,4,5,6,67,4,7,8,4,2};
    int length= sizeof(arr)/ sizeof(int);
    int sum=0;
    for (int i = 0; i < length; ++i) {
        sum+=arr[i];

    }

    printf("平均值为%f",sum*1.0/length);
}




