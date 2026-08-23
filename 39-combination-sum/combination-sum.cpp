class Solution {
public:
    vector<vector<int>> r;

    void f(vector<int>& a,int i,int t,vector<int>& v) {
        if(t==0) {
            r.push_back(v);
            return;
        }
        if(i==a.size() || t<0) return;

        v.push_back(a[i]);
        f(a,i,t-a[i],v);
        v.pop_back();

        f(a,i+1,t,v);
    }

    vector<vector<int>> combinationSum(vector<int>& a,int t) {
        vector<int> v;
        f(a,0,t,v);
        return r;
    }
};