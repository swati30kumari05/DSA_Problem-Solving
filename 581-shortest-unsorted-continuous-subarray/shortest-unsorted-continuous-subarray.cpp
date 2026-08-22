class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int fi = n, la = -1;
        stack<int> st;
        for (int i = 0; i < n; i++) {
            int ind = i;
            while (!st.empty() && nums[st.top()] > nums[i]) {
                int x = st.top();
                st.pop();
                if (nums[x] > nums[ind])  ind = x;
                fi = min(fi, x);
                la = max(la, i);
            }
            st.push(ind);
        }
        if (la != -1 && fi != n) return la - fi + 1;
        return 0;
    }
};