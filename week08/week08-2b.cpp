///week08-2b.cpp ����|���
#include <stdio.h>
int main()
{
    printf("�п�J�Ʀr:");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int space=n-i,star=n;
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int k=1;k<=star;k++){
            printf("*");
        }
        printf("\n");
    }
}

