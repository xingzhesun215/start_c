#include <stdio.h>


/**
约瑟夫生者死者小游戏

 30 个人在一条船上，超载，需要 15 人下船。

于是人们排成一队，排队的位置即为他们的编号。

报数，从 1 开始，数到 9 的人下船。

如此循环，直到船上仅剩 15 人为止，问都有哪些编号的人下船了呢？
*/
int main1() {

    int man[30] = {};
    int count = 0;//记录淘汰个数
    int index = 0;//记录当前索引
    int num = 1;//当前数到第几个人
    while (count <= 9) {

        if (index == 30) {
            index = 0;
            continue;
        }
        if (num == 9) {
            if (man[index] == 0) {
                man[index] = 1;
                printf("淘汰%d,位置为%d\n", count, index + 1);
                num = 1;
                count++;
            } else {
                index++;
            }
        } else {
            if (man[index] == 0) {
                num++;
                index++;
            } else {
                index++;
            }
        }

    }
    return 0;

}