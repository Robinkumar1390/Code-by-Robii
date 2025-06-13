class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int result = 0;

        while (i < j) {
            int area = min(height[i], height[j]) * (j - i);
            result = max(result, area);

            if (height[i] < height[j]) {
                i++;
        }   else {
                j--;
        }
    }

    return result;
}
        

};