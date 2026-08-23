class Solution {
public:
    vector<string> r;
    string m[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    void f(string& d,int i,string s) {
        if(i==d.size()) {
            r.push_back(s);
            return;
        }
        for(char c:m[d[i]-'0'])
            f(d,i+1,s+c);
    }

    vector<string> letterCombinations(string d) {
        if(d.empty()) return {};
        f(d,0,"");
        return r;
    }
};