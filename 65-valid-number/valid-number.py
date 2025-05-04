
class Solution:
    def isNumber(self, s: str) -> bool:
        s = s.strip()
        
        pattern = r"^[+-]?(\d+(\.\d*)?|\.\d+)([eE][+-]?\d+)?$"
        
        return bool(re.match(pattern, s))
