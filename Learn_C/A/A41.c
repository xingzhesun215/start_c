#include <stdio.h>

void reverseStr();

/**
 *字符串反转
 *
*/
int main1() {

    printf("输入一个字符串:\n");
    reverseStr();

}

void reverseStr(){
    char c;
    scanf("%c",&c);
    if(c!='\n'){
        reverseStr();//先回调
        printf("%c",c);//最后打印,这样就实现了最先输入的最后打印
    }
}


