///week04-5.cpp
#include <stdio.h>
int main()
{
	int a;
	int ans=1;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		ans*=i;
	}
	printf("%d",ans);
}
