///SOIT108_Advance_012 進階題：大於漸增數列總和之最小整數
#include <stdio.h>
int main()
{
	int k,ans;
	scanf("%d",&k);
	for(int N=1;N<=k;N++){
		int now=(1+N)*N/2;
		if(now>k){
			ans=N;
			break;
		}
	}
	printf("%d",ans);
}