#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>st; // segment tree

void buildSegTree(int st_idx,vector<int>& arr,int start,int end){
    if(start>end){
        return;
    }
    if(start==end){ // Leaf Node Condition
        st[st_idx]=arr[start]; // copying array element into segment tree
        return;
    }
    
    // Internal Node
    int middle=start+(end-start)/2;
    buildSegTree(2*st_idx,arr,start,middle);   // 2*i -> Left Child
    buildSegTree(2*st_idx+1,arr,middle+1,end);  // 2*i +1 -> Right Child
    st[st_idx]=st[2*st_idx] + st[2*st_idx +1];
}


int query(int qs,int qe,int st_idx,int start,int end){
    if(qs>end or qe<start){ // No  Overlap condition
        return 0;
    }
    if(start>=qs and end<=qe){ // Total Overlap condition
        return st[st_idx];
    }
    
    //Partial Overlap Condition
    int middle=start+(end-start)/2;
    int leftSum=query(qs,qe,2*st_idx,start,middle);
    int rightSum=query(qs,qe,2*st_idx+1,middle+1,end);
    return leftSum+rightSum;
}

void updateNode(int st_idx,int start,int end,int pos,int newValue){
    if(start<pos or end<pos){  // Invalid Case -> No Overlap
        return;
    }
    if(start==end){ // LeafNode-> Total Overlap
        st[st_idx]=newValue;
        return;
    }
    int middle=start+(end-start)/2;
    updateNode(2*st_idx,start,middle,pos,newValue);
    
    updateNode(2*st_idx+1,middle+1,end,pos,newValue);
    st[st_idx]=st[2*st_idx]+st[2*st_idx+1];
}

int main()
{
    int n=6;
    vector<int> arr={1,3,2,-2,4,5};
    st.resize(4*n+1);
    int st_idx=1;  // 1 based indexing->start index of segment tree
    int start=0,end=n-1;
    
    // Building Segment Tree
    buildSegTree(st_idx,arr,start,end);
    
    cout<<"\nSegment Tree is :\n";
    for(int i=0;i<=4*n;i++){
        cout<<st[i]<<" ";
    }
    cout<<"\n";
    
    cout<<"Query is 0-based indexed\n";
    cout<<"RangeSum(2,4) "<<query(2,4,st_idx,start,end)<<"\n";
    
    cout<<"RangeSum(1,4) "<<query(1,4,st_idx,start,end)<<"\n";
    
    cout<<"RangeSum(3,3) "<<query(3,3,st_idx,start,end)<<"\n";
    
    arr[2]=100;
    updateNode(st_idx,start,end,2,100); // Updating Value at Node 2 to 100
    
    
    return 0;
}
