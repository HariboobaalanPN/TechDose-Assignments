class Solution:
    def calculate(self, s: str) -> int:
        sign=1
        result=0
        num=0
        n=len(s)
        stack=[]
        for i in range(n):
            if s[i].isdigit():
                num=num*10 + int(s[i])
            elif s[i]=='+':
                result+=(num*sign)
                num=0
                sign=1
            elif s[i]=='-':
                result+=(num*sign)
                num=0
                sign=-1
            elif s[i]=='(':
                stack.append(result)
                stack.append(sign)
                result=0
                sign=1
            elif s[i]==')':
                result+= num*sign
                result*=stack.pop()
                result+=stack.pop()
                num=0
        return result+(num*sign)