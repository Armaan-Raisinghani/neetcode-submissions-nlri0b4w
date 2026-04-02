class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        p = [None]*len(nums)
        s = [None]*len(nums)
        p[0] = 1
        s[-1] = 1
        for i in range(1,len(nums)):
            p[i] = p[i-1]*nums[i-1]
        for i in range(len(nums)-2,-1,-1):
            s[i] = s[i+1]*nums[i+1]
        output = [None]*len(nums)
        for i in range(len(nums)):
            output[i] = p[i]*s[i]
        return output