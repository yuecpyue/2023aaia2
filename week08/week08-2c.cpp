///week08-2c.cpp �T����
#include <stdio.h>
int main()
{
    printf("�п�J�Ʀr:");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int star=i;
        //for(int k=1;k<=space;k++){
            //printf(" ");
        //}
        for(int k=1;k<=star;k++){
            printf("*");
        }
        printf("\n");
    }
}


