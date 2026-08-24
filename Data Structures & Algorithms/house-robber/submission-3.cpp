class Solution {
   public:
    int rob(vector<int>& nums) {
        if (nums.empty()) return 0;
        if (nums.size() == 1) return nums[0];
        int two = nums[0];
        int one = max(nums[0], nums[1]);
        for (int i = 2; i < nums.size(); i++) {
            int temp = max(nums[i] + two, one);
            two = one;
            one = temp;
        }
        return one;
    }
};
