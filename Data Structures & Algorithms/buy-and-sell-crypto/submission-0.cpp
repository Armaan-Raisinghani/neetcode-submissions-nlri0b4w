class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0;
        int mb = prices[0];
        for (int& s:prices){
            p = max(p,s-mb);
            mb = min(mb, s);
        }
        return p;
    }
};
