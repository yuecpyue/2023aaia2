///(SOIT108_Advance_014) 進階題：計算級數的值 
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int ans=0;
	for(int i=0;i<=a;i++){
			ans+=2*i+1;
	}
	printf("f(%d)=%d",a,ans);
}