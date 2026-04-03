class Solution {
public:
    string minWindow(string s, string t) {
        int l = 0;
        int r = 0;
        string ans = "";
        vector<int> d(52,0);
        vector<int> a(52,0);
        for(int i = 0; i < t.size(); i++) {
            a[idx(t[i])]++;
        }
        while(r<s.size()){
            d[idx(s[r])]++;
            bool val = true;
            while(d[idx(s[l])] > a[idx(s[l])]){
                d[idx(s[l])]--;
                l++;
            }
            for(int i = 0; i< d.size(); i++){
                if(d[i]<a[i]) val=false;
            }
            if(val && (ans == "" || r-l+1<ans.size())) ans = s.substr(l, r-l+1);
            bool g = true;
            r++;
        }
        return ans;

    }
    int idx(char c){
        if(c >= 'a') return c - 'a';
        return c - 'A' + 26;
    }
};
