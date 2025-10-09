class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] > nums[max]){
                max = i;
            }
        }
        return max;
            
        
    }
};