///(SOIT108_Advance_011) 進階題：秒數換算
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int ss=a%60;
	int mm=a/60%60;
	int hh=a/3600%60;
	printf("%02d:%02d:%02d",hh,mm,ss);
	///printf("%02d:%02d:%02d",a/3600,a/60%60,a%60);
}