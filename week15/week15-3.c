///1208. Get Equal Substrings Within Budget
int equalSubstring(char* s, char* t, int maxCost) {
    int N=strlen(s);
    int ans=0,j=0;
    for(int i=0;i<N;i++){
        maxCost-=abs(s[i]-t[i]);
        while(maxCost<0){
            maxCost+=abs(s[j]-t[j]);
            j++;
        }
        ///printf("%c %c\n",s[i],t[i]);
        if(i-j+1>ans) ans=i-j+1;
    }
    return ans;
}