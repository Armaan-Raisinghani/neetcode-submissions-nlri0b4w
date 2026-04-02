class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        ds= {}
        dt = {}
        for i in s:
            if ds.get(i):
                ds[i]+=1
            else:
                ds[i]=1
        for i in t:
            if dt.get(i):
                dt[i]+=1
            else:
                dt[i]=1
        c = [0 for i in dt|ds if dt.get(i)!=ds.get(i)]
        return not len(c)