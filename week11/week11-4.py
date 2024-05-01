#leetcode2000. Reverse Prefix of Word
class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        for i in range(len(word)):
            if word[i]==ch:
                return word[i::-1]+word[i+1:]
        return word #沒找到跟cd相同的字，就return原來的字