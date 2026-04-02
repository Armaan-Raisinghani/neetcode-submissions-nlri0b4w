class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        int m = 0;
        unordered_map<char,int> d= {};
        while (r<s.size()){
            d[s[r]]++;
            char most_freq;
            int max_freq = 0;
            for (const auto& [_,v]:d){
                if (v>max_freq) max_freq = v;
            }
            while (r-l+1-max_freq>k){
                d[s[l]]--;
                l++;
            }
            if (r-l+1>m) m = r-l+1;
            r++;
        }
        return m;
    }
};
