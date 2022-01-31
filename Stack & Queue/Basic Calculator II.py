class Solution:
    def calculate(self, s: str) -> int:
        s+='+'
        stack,num,operator,n=[],0,'+',len(s)
        for i in range(n):
            if s[i].isdigit():
                num=num*10+int(s[i])
            elif s[i] in ('+','-','*','/'):
                if operator=='+':
                    stack.append(num)
                elif operator=='-':
                    stack.append(-num)
                elif operator=='*':
                    stack.append(stack.pop()*num)
                elif operator=='/':
                    stack.append(int(stack.pop()/num))
                num=0
                operator=s[i]
        return sum(stack)