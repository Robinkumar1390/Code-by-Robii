class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int>m1;
        for(int i=0; i<nums.size(); i++){
            m1[nums[i]]++;
        }
        for(auto r: m1){
            if(r.second>1){
                return true;
                
            }
            
        }
        return false;
        
    }
};