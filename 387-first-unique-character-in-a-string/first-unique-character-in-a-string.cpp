class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int>s1;
        for(char r: s){
            s1[r]++;
        }
        for(int i=0; i<s.size(); i++){
            if(s1[s[i]]==1){
                return i;
            }
        }
        return -1;
        
    }
};