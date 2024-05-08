#include <stdio.h>
int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    printf("請輸入一個數字:");
    scanf("%d",&n);
    int ans=0;
    for(int i=2; i<=n;i++){
        if(isPrime(i)){
            printf("%d ",i);
            ans ++;
        }
    }
    printf("\n");
    printf("總共有%d個質數\n",ans);
}
