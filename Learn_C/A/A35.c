#include <stdio.h>

/**
 * 表格形式输出数据。
 *
1  11  21  31  41  51  61  71  81  91
2  12  22  32  42  52  62  72  82  92
3  13  23  33  43  53  63  73  83  93
4  14  24  34  44  54  64  74  84  94
5  15  25  35  45  55  65  75  85  95
6  16  26  36  46  56  66  76  86  96
7  17  27  37  47  57  67  77  87  97
8  18  28  38  48  58  68  78  88  98
9  19  29  39  49  59  69  79  89  99
10  20  30  40  50  60  70  80  90 100
*/
int main1() {

    int m;
    printf("输入一个整数\n");
    scanf("%d", &m);

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d\t", i + j * m + 1);
        }
        printf("\n");
    }

    return 0;
}
