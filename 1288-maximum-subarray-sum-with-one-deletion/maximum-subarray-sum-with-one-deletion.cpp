class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int keep = arr[0];
        int result = arr[0];
        int del=INT_MIN;
        for(int i=1;i<arr.size();i++){
            int prevkeep=keep;
            keep=max(arr[i],keep+arr[i]);
            if(del==INT_MIN){
                del=arr[0];
            }
            int newDel=max(del+arr[i],prevkeep);
            del=newDel;
            result = max(result,max(keep,newDel));
        }return result;
    }
};