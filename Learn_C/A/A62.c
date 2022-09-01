#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
} s;

/**
使用结构体
*/
int main1() {
    printf("输入信息:\n");
    printf("name:");
    scanf("%s", s.name);

    printf("编号:");
    scanf("%d", &s.roll);

    printf("成绩:");
    scanf("%f", &s.marks);

    printf("显示信息:");
    printf("name:%s  编号:%d  成绩:%f", s.name, s.roll, s.marks);

    return 0;
}