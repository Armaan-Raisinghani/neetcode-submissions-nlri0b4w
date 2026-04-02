class Solution:
    def anagramDict(self, string:str):
        an = {}
        for i in string:
            if i in an:
                an[i]+=1
            else:
                an[i]=1
        return an
    def hashDict(self, m:dict):
        string = ''
        for i in range(ord('a'),ord('z')+1):
            if chr(i) in m:
                string+=chr(i)
                string+=str(m[chr(i)])
        return string
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        ans = {}
        for i in strs:
            #print(i)
            #print(i, self.anagramDict(i), self.hashDict(self.anagramDict(i)))
            if self.hashDict(self.anagramDict(i)) in ans:
                ans[self.hashDict(self.anagramDict(i))].append(i)
            else:
                ans[self.hashDict(self.anagramDict(i))]=[i]
        return (list(ans.values()))
