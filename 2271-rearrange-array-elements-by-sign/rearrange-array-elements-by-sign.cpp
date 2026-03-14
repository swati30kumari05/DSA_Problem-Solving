class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        int positiveIdx = 0;
        int negativeIdx = 1;

        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                result[positiveIdx] = nums[i];
                positiveIdx += 2;
            } 
            else{
                result[negativeIdx] = nums[i];
                negativeIdx += 2;
            }
        }

        return result;
    }
};