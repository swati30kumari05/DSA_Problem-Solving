class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int low=0,high=0;
        int mnlen=n+1;
        int temp=0;
        while(high<n){
            temp+=nums[high];
            while(temp>=target){
                if(high-low+1<mnlen){
                    mnlen=high-low+1;
                }
                temp-=nums[low];
                low++;
            }
            high++;
        }
        if(mnlen==n+1){
            return 0;
        }
        return mnlen;
    }
};