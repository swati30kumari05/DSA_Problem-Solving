class Solution {
public:
    bool f(vector<vector<char>>& a,string& w,int i,int x,int y) {
        if(i==w.size()) return true;
        if(x<0||y<0||x==a.size()||y==a[0].size()||a[x][y]!=w[i])
            return false;

        char c=a[x][y];
        a[x][y]='#';

        bool ok=f(a,w,i+1,x+1,y)||
               f(a,w,i+1,x-1,y)||
               f(a,w,i+1,x,y+1)||
               f(a,w,i+1,x,y-1);

        a[x][y]=c;
        return ok;
    }

    bool exist(vector<vector<char>>& a,string w) {
        for(int i=0;i<a.size();i++)
            for(int j=0;j<a[0].size();j++)
                if(f(a,w,0,i,j)) return true;
        return false;
    }
};