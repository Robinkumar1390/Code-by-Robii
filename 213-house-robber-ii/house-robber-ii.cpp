class Solution {
public:
    int rob1(vector<int>& nums, int st, int end, vector<int>& memo) {
        if (st < end) return 0;
        if (memo[st] != -1) return memo[st];
        return memo[st] = max(rob1(nums, st - 2, end, memo) + nums[st],
                              rob1(nums, st - 1, end, memo));
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        vector<int> memo1(n, -1);
        vector<int> memo2(n, -1);
        return max(rob1(nums, n - 1, 1, memo1),
                   rob1(nums, n - 2, 0, memo2));
    }
};

