#include <stdio.h>
#include <stdlib.h>


/**
输出当前文件执行代码
*/
int main1() {

    FILE *fptr;
    char c;
    fptr = fopen(__FILE__, "r");
    do {
        c = getc(fptr);
        putchar(c);
    } while (c != EOF);
    fclose(fptr);

    return 0;

}