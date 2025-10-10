class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>m1;
        for(auto a: strs){
            string s2 = a;
            sort(s2.begin(), s2.end());
            m1[s2].push_back(a);
        }
        vector<vector<string>> res;
        for(auto c: m1){
            res.push_back(c.second);
        }
        return res;
    }
};