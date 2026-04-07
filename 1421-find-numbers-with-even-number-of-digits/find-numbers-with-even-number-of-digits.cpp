class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            n = nums[i];
            int digitcount = 0;
            while (n != 0) {
                n = n / 10;
                digitcount++;
            }
            if (digitcount % 2 == 0) {

                count++;
            }
        }
        return count;
    }
};