class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = nums[0];
        int maxEnding = nums[0];
        int maxAns = nums[0];
        int minEnding = nums[0];
        int minAns = nums[0];
        
        for(int i=1;i<nums.size();i++){
            total = total+nums[i];
            
            maxEnding = max(maxEnding+nums[i],nums[i]);
            maxAns = max(maxAns,maxEnding);

            minEnding = min(minEnding+nums[i],nums[i]);
            minAns = min(minAns,minEnding);
            
        }
        if(maxAns<0){
            return maxAns;
        }
        else{
            return max(maxAns , total-minAns);
        }
    }
};