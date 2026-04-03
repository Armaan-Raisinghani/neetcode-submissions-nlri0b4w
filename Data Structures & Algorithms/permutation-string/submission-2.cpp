class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l = 0;
        int r = 0;
        vector<int> t(26,0);
        vector<int> c(26,0);
        for(const auto& i:s1) t[i-'a']++;
        while (r-l<s1.size()){
            c[s2[r]-'a']++;
            r++;
        }
        if (c==t) return true;
        while (r<s2.size()) {
            c[s2[r]-'a']++;
            c[s2[l]-'a']--;
            l++;
            r++;
            if (c==t) return true;
        }
        return false;
    }
};
