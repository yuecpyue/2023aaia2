///SOIT108_Advance_014B) 進階題：拆解輸入的正整數
#include <stdio.h>
int main()
{
	int n,ten=1;
	scanf("%d",&n);
	while(n>0){
		int now=n%10*ten;
		n=n/10;
		ten=ten*10;
		printf("%d ",now);
	}
}