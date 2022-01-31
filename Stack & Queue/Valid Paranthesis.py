class Solution:
    def isValid(self, s: str) -> bool:
        d={')':'(','}':'{',']':'['}
        stack=[]
        for i in s:
            if i=='(' or i=='{' or i=='[':
                stack.append(i)
                continue
            if len(stack)==0 or d[i]!=stack.pop():
                return False
        return len(stack)==0