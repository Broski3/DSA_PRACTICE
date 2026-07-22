class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxEnding = nums[0];
        int minEnding = nums[0];
        int maxAns = nums[0];
        int minAns = nums[0];
        for(int i=1;i<nums.size();i++){

            maxEnding = max(nums[i]+maxEnding,nums[i]);
            maxAns = max(maxAns,maxEnding);

            minEnding = min(nums[i]+minEnding,nums[i]);
            minAns = min(minAns,minEnding);

        }return max(maxAns,abs(minAns));
    }
};