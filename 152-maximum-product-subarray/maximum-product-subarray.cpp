class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = nums[0];
        int currMax = nums[0];
        int currMin = nums[0];
        int temp;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0) {
                temp = currMax;
                currMax = currMin;
                currMin = temp;
            }

            currMax = max(nums[i], nums[i] * currMax);
            currMin = min(nums[i], nums[i] * currMin);

            maxProduct = max(maxProduct, currMax);
        }

        return maxProduct;
    }

};
