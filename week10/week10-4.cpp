///�n���ܼƽd��
#include <stdio.h>
int z=100;
void myFunc(){
    int x=20;
    printf("myFunc()�̪�x: %d z: %d\n",x,z);
    printf("�b���}��,�����x�Mz���]��0\n");
    x=0;
    z=0;
}

int main()
{
        int x=10;
        printf("main()  �̪�x�O: %d z: %d\n",x,z);
        myFunc();
        printf("main()  �̪�x�O: %d z: %d\n",x,z);
}

