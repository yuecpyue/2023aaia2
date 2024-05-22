# include <stdio.h>
void myPrint(int x[3][4]){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%2d ",x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int d[3][4];///函式外宣告變數沒給值會補0
int globalInt;

int main()
{
    int a[3][4];
    int b[3][4]={1,2,3};
    int c[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    myPrint(a);///這行要註解,因亂碼
    myPrint(b);
    myPrint(c);
    myPrint(d);
    int localInt;///函式內沒給值=>亂碼
    printf("globalInt: %d localInt:%d\n",globalInt,localInt);
}
