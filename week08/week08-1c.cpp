///week08-1c.cpp �E�E���k�� &�e�P�P�ۦP���B
#include <stdio.h>
int main()
{
    printf("�п�J�j�p:");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int space=i,star=n;
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int k=1;k<=star;k++){
            printf("*");
        }
        //for(int j=1;j<=n;j++){
           // printf("*");
        //}
        printf("i:%d\n",i);
    }
}
