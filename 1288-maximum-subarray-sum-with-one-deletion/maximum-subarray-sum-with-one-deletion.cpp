class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int keep=arr[0];
        int del= 0;
        int ans = arr[0];
        for(int i=1;i<arr.size();i++){
            int newDel=max((del+arr[i]),keep);
            keep = max(arr[i],(keep+arr[i]));
            del=newDel;
            ans = max(ans ,max(del,keep));
        }
        return ans;
    }
};