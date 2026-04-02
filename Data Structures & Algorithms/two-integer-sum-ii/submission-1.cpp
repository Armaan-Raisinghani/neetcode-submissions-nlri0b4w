class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        auto l = numbers.begin();
        auto r = numbers.end()-1;
        while (l<r) {
            cout << *l << " " << *r << endl;
            if (*l+*r > target) r-=1;
            else if (*l+*r < target) l+=1;
            else return {l-numbers.begin()+1,r-numbers.begin()+1};
        }
    }
};
