class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ans = {}
        for i in range(len(nums)):
            e = nums[i]
            if ans.get(str(e))!=None:
                return [ans.get(str(e)), i]
            else:
                ans[str(target-e)]=i
