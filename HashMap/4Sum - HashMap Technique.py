nums = [1,0,-1,0,-2,2]
target = 0
n=len(nums)
nums.sort()
res=[]
for i in range(n-3):
    if i>0 and nums[i]==nums[i-1]:
        continue
    for j in range(i+1,n-2):
        if j>i+1 and nums[j]==nums[j-1]:
            continue
        left=j+1
        right=n-1;
        while(left<right):
            summ=nums[i]+nums[j]+nums[left]+nums[right]
            if(summ>target):
                right-=1;
            elif(summ==target):
                res.append([nums[i],nums[j],nums[left],nums[right]])
                left+=1;
            else:
                left+=1;
print(res)