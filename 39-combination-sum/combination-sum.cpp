class Solution {
public:
    void backtrack(vector<int>& nums, int target, vector<int>& path, int start, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(path);
            return;
        }
        if (target < 0) return;

        for (int i = start; i < nums.size(); ++i) {
            path.push_back(nums[i]);
            backtrack(nums, target - nums[i], path, i, result); 
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> path;
        backtrack(nums, target, path, 0, result);
        return result;
    }
};
