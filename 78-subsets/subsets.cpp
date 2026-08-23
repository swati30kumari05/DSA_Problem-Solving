class Solution {
public:
    vector<vector<int>> r;

    void f(vector<int>& a,int i,vector<int>& v) {
        if(i==a.size()) {
            r.push_back(v);
            return;
        }
        f(a,i+1,v);
        v.push_back(a[i]);
        f(a,i+1,v);
        v.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& a) {
        vector<int> v;
        f(a,0,v);
        return r;
    }
};