#include <stdio.h>
int main()
{
    int a=3;
    while(a>0)
    {
        printf("a是%d\n",a);///印出來
        a--;///a變小,其實是a-=1的縮寫
    }
    for(int b=3;b>0;b--)
    {
        printf("b是%d\n",b);
    }

}

