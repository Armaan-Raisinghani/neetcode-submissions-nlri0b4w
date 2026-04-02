class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        const d = {}
        for(let i=0; i<nums.length; i++){
            if (d[nums[i]] == 1) return true
            else d[nums[i]] = 1
        }
        return false
    }
}
