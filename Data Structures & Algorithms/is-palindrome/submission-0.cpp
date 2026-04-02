class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        vector<char> clean = {};
        while (i<s.size()){
            if (std::isalnum(s[i])){
                if (s[i] >= 'A' && s[i] <= 'Z') clean.push_back(std::tolower(s[i]));
                else clean.push_back(s[i]);
            }
            i++;
        }
        int l = 0;
        int r = clean.size()-1;
        while (l<r){
            cout << l << " " << r << clean[l] << " " << clean[r] << endl;
            if (clean[l]!=clean[r]) return false;
            l+=1;
            r+=-1;
        }
        return true;
    }
};
