#1208. Get Equal Substrings Within Budget
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        N=len(s) #字串長度
        ans=0
        j=0
        for i in range(N):
            maxCost-=abs(ord(s[i]) - ord(t[i]))
            while maxCost<0:
                maxCost+=abs(ord(s[j])-ord(t[j]))
                j+=1
            ans=max(ans,i-j+1)
            #print(s[i],t[i]);#印出字串陣列

        return ans