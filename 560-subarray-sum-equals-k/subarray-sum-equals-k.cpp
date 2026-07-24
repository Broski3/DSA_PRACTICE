class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>f;
        f[0]=1;
        int sum=0;
        int result =0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int find =sum-k;
            if(f.find(find)!=f.end()){
                result+=f[find];
            }
            f[sum]++;
        }
        return result;
    }
};