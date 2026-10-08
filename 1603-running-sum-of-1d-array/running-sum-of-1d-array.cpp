class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int running_sum = 0;
        vector<int>ans;
        for(auto x:nums){
            running_sum += x;
            ans.push_back(running_sum);
        }return ans;
    }
};