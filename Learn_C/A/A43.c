#include <stdio.h>


/**
 *输出数组
 *
*/
int main1() {

    int arr[10]={1,4,5,6,67,4,7,8,4,2};
    int length= sizeof(arr)/ sizeof(int);
    for (int i = 0; i < length; ++i) {
        printf("%d:%d\n",i+1,arr[i]);

    }


}




