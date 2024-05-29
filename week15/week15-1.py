///1208. Get Equal Substrings Within Budget
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        N=len(s) #字串長度
        for i in range(N):
            print(s[i],t[i]);#印出字串陣列

        return 0