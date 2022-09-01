#include <stdio.h>
#include <math.h>

/**
 *方差计算
 *
*/
int main1() {

    int arr[10] = {1, 4, 5, 6, 67, 4, 7, 8, 4, 2};
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += arr[i];
    }
    int mean = sum / 10;
    float statnder = 0;
    for (int j = 0; j < 10; ++j) {
        statnder += pow(arr[j] - mean, 2);
    }

    printf("标准方差=%f", sqrt(statnder / 10));
}







