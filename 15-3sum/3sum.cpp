class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i = 0;
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        for(i;i<nums.size()-2;i++){
            int left = i+1;
            int right = nums.size()-1;
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            while(left<right){
                int target = -nums[i];
                int sum = nums[left]+nums[right];
                if(sum==target){
                    result.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1]){
                        left++;
                    }
                    while(left<right && nums[right]==nums[right+1]){
                        right--;
                }
                }
                else if(sum>target){
                    right--;
                }
                else{
                    left++;
                }
            }
        }return result;
    }
};