///week09-2.cpp gets()和scanf()
///要了解字串和陣列的關係
#include <stdio.h>
int main()
{
    char line[80];
    printf("請輸入一行英文,有空格沒關係:\n");
    gets(line);///6-16頁
    printf("這行字是:%s\n",line);

    printf("請再輸入一行英文\n");
    scanf("%s",line);
    printf("這行字是:%s\n",line);

}
