///week09-2.cpp gets()�Mscanf()
///�n�F�Ѧr��M�}�C�����Y
#include <stdio.h>
int main()
{
    char line[80];
    printf("�п�J�@��^��,���Ů�S���Y:\n");
    gets(line);///6-16��
    printf("�o��r�O:%s\n",line);

    printf("�ЦA��J�@��^��\n");
    scanf("%s",line);
    printf("�o��r�O:%s\n",line);

}
