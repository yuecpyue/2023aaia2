///week08-3a.cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int space=n-i,star=i;
		for(int k=1;k<=n;k++){
			if(k<=space)
				printf(" ");
			else
				printf("*");
		}
		///for(int k=1;k<=star;k++){
			///printf("*");
		///}
		
		printf("\n");
	}
}