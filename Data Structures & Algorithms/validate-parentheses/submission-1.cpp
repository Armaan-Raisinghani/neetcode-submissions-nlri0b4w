class Solution {
public:
    bool isValid(string s) {
        vector<char> v = {};
        int i = 0;
        while (i<s.size()){
            char c = s[i];
            i++;
            if(v.size()>0){
                if (v.back()=='(' && c==')') {v.pop_back();continue;}
                else if (v.back()=='[' && c==']') {v.pop_back();continue;}
                else if (v.back()=='{' && c=='}') {v.pop_back();continue;}}
            v.push_back(c);
        }
        return (v.size() == 0);
    }
};
