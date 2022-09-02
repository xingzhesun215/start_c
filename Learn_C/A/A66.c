#include <stdio.h>
#include <stdlib.h>


/**
从文本中读取一行
*/
int main1() {

    char str[1000];
    FILE *fptr;
    fptr = fopen("hello.txt", "r");
    if (fptr == NULL) {
        printf("ERROR");
        exit(1);
    }
    fscanf(fptr, "%[^\n]", str);//直到新的一行
    printf("读取的内容:%s", str);
    fclose(fptr);

    return 0;

}