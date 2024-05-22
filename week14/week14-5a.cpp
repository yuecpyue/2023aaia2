///SOIT107_ADVANCE_011) 進階題：字串中的數字個數
#include <stdio.h>
int main()
{
	char line[100];
	scanf("%s",line);
	int i=0,ans=0;
	for(int i=0;line[i]!=0;i++){
		if(line[i]>='0'&&line[i]<='9') ans++;
	}
	printf("%d\n",ans);
	
	
}