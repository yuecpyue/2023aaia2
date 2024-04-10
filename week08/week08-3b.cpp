///week08-3b.cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=n){
		int k=1;
		int space=n-i;
		while(k<=n){
			if(k<=space)
				printf(" ");
			else
				printf("*");
			k++;
		}
		printf("\n");
		i++;
	}
}