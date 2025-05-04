
class Solution:
    def isNumber(self, s: str) -> bool:
        s = s.strip()
        
        pattern = r"^[+-]?(\d+(\.\d*)?|\.\d+)([eE][+-]?\d+)?$"

        if re.match(pattern,s):
            return True
        else:
            return False
        
