#include <stdio.h>


/**
 *数组拷贝
 *
*/
int main1() {

    int arr[10] = {1, 4, 5, 6, 67, 4, 7, 8, 4, 2};
    int cp[10];
    for (int i = 0; i < 10; ++i) {
        cp[i] = arr[i];
    }
    for (int j = 0; j < 10; ++j) {
        printf("前:%d,后:%d\n", arr[j], cp[j]);
    }
}







