#988. Smallest String Starting From Leaf
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def smallestFromLeaf(self, root: Optional[TreeNode]) -> str:
        #要做對照表，把0...25對照成字母'a'...'z'
        table="abcdefghijklmnopqrstuvwxyz"
        def helper(root,nowStr):#nowStr累積的字串
            #if root==None: return nowStr#樹下沒有東西時，右邊累積的字串，就是結果
            nextStr=table[root.val]+nowStr
            if root.right==None and root.left==None: return nextStr#最後的葉子，沒有左右了
            if root.left==None: return helper(root.right, nextStr)#左邊空的，只能往右跑
            if root.right==None: return helper(root.left,nextStr)#右邊空的，只能往左跑
            #以下是健康的狀況
            left=helper(root.left, nextStr)#左邊結果
            right=helper(root.right,nextStr)#右邊結果
            return min(left,right)#最小的當答案

        #print("table[0] is",table[0])
        #print("table[25] is",table[25])
        return helper(root,'')