class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        ans  = {}
        for i in nums:
            if ans.get(str(i)):
                ans[str(i)] = ans[str(i)]+1 
            else:
                ans[str(i)]=1
        sol = []
        print(ans)
        for i in range(k):
            m = None
            for i in ans:
                if not m or ans[i]>ans[m]:
                    m = i
            sol.append(m)
            del ans[m]
        return (sol)
            