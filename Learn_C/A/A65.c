#include <stdio.h>
#include <stdlib.h>


/**
字符串写入文件
*/
int main1() {

    char str[1000];
    FILE *fptr;
    fptr = fopen("hello.txt", "w");
    if (fptr == NULL) {
        printf("ERROR");
        exit(0);
    }
    printf("输入字符串\n");
    fgets(str, sizeof(str)/ sizeof(char),stdin);
    fprintf(fptr,"%s",str);
    fclose(fptr);

    return 0;

}