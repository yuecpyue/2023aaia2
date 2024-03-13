#2485. Find the Pivot Integer
class Solution:
    def pivotInteger(self, n: int) -> int:
        total=0
        for i in range(1,n+1):
            total+=i#先算總和
        #接下來
        left=0
        for i in range(1,n+1):
                left += i
                if left*2-i==total:return i
        return -1