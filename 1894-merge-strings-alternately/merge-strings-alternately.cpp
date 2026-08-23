class Solution {
public:
    string mergeAlternately(string a,string b) {
        string r;
        int i=0;
        while(i<a.size()||i<b.size()) {
            if(i<a.size()) r+=a[i];
            if(i<b.size()) r+=b[i];
            i++;
        }
        return r;
    }
};