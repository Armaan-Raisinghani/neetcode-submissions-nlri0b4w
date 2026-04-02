class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        d = {}
        for i in nums:
            d[i] = d.get(i,0)+1
        print(d)
        m = 0
        for i in d:
            if not d.get(i-1,0):
                j = i
                while d.get(j,0):
                    j+=1
                if j-i>m:
                    m = j-i
        return m 
                