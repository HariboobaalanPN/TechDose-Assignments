def merge(intervals):
        if len(intervals) == 1:
	        return intervals
        intervals=sorted(intervals,key=lambda x:(x[0],x[1]))
        r=[intervals[0]]
        ind=0
        for i in range(1,len(intervals)):
            if(r[ind][1] >= intervals[i][0]):
                r[ind][1]=max(r[ind][1],intervals[i][1])
            else:
                r.append(intervals[i])
                ind+=1
        return r
intervals = [[1,3],[2,6],[8,10],[15,18]]
print(merge(intervals))