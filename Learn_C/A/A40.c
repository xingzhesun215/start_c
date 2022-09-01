#include <stdio.h>
#include <math.h>


/**
 * 八进制转二进制
 *
*/
int main1() {

    int m;
    printf("输入一个数\n");
    scanf("%d", &m);

    long result = 0;
    int temp = m;
    int count=0;
    while (temp != 0) {
        int yu = temp % 10;
        temp /= 10;
        for (int i = 0; i < 3; ++i) {

            int y1 = yu % 2;
            yu /= 2;
            result = result  + y1*pow(10,count);
            count++;
        }
    }

    printf("%d八进制转二进制=%ld",m,result);


}


