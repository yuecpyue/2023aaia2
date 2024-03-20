#leetcode2078.Two Furthest Houses With Different Colors
#用兩個for迴圈
class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        ans=0
        N=len(colors)
        for i in range(N):#左手
            for j in range(i-1,N):#右手
                if colors[i]!=colors[j] and j-i>ans:#距離更大與色彩不同
                    ans=j-i#更新距離
        return ans