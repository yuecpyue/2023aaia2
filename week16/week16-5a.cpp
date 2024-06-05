///(SOIT108_Advance_009) 進階題：奇數反流
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n-1;i>=0;i--){
		if(a[i]%2==1)
			printf("%d ",a[i]);
	}
}