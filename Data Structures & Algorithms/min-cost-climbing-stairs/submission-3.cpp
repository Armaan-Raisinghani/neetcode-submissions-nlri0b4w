class Solution {
   public:
    int minCostClimbingStairs(vector<int>& cost) {
        int one = 0, two = 0;
        for (int i = 2; i <= cost.size(); i++) {
            int temp = min(two+cost[i-2],one + cost[i - 1]);
            two = one;
            one = temp;

        }
        return one;
    }
};
