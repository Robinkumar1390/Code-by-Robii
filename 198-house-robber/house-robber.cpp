class Solution {
public:
    int rob1(vector<int>& nums, int i, vector<int>& memo) {
        if (i < 0) return 0;
        if (memo[i] != -1) return memo[i];
        return memo[i] = max(rob1(nums, i - 1, memo),
                             rob1(nums, i - 2, memo) + nums[i]);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> memo(n, -1);
        return rob1(nums, n - 1, memo);
    }
};
