#include <stdio.h>

/**
 * 判断元音/辅音
 * 英语有26个字母，元音只包括 a、e、i、o、u 这五个字母，其余的都为辅音。y是半元音、半辅音字母，但在英语中都把他当作辅音。
 */
int main1() {

   char c;
   printf("输入字母\n");
   scanf("%c",&c);
   if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
       printf("%c是元音",c);
   }else{
       printf("%c是辅音",c);
   }


    return 0;
}
