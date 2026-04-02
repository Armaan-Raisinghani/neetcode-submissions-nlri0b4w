class Solution:

    def encode(self, strs: List[str]) -> str:
        final = ""
        for i in strs:
            final+=str(len(i))
            final+="$"
            final+=i
        return final
    def decode(self, s: str) -> List[str]:
        i = 0
        output = []
        while i < len(s):
            for j in range(i+1,len(s)):
                if s[j] == "$":
                    break
            print(s,i,j)
            l = int(s[i:j])
            output.append(s[j+1:j+l+1])
            i = j+l+1
        return output
