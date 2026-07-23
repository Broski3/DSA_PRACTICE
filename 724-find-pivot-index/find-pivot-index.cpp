class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int prefix =0;
         int sum =0;
         int sufix =0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        for (int i=0;i<nums.size();i++){
            sufix=sum-prefix-nums[i];
            if(prefix==sufix){
                return i;
            }
             prefix+=nums[i];
        }return -1;
    }
};