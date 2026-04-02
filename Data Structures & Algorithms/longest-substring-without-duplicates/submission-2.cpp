class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //if (s.empty()) return 0;
        int l = 0;
        int r = 0;
        int ma = 0;
        unordered_map<char, int> d;
        while (r<s.size()){
            if (d.find(s[r])==d.end()){

                d[s[r]]=r;
                ma = max(ma,(r-l)+1);
            } else {
                while(l<=d[s[r]]){
                    d.erase(s[l]);
                    l++;
                }
                d[s[r]]=r;
            }
            r+=1;
            
        }
        return ma;
    }
};
