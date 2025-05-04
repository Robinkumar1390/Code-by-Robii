class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.rstrip()
        count = 0
        for i in reversed(s):
            if i == " ":
                break
            count +=1;
        return count