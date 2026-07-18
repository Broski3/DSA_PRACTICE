class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0;
        int right = nums.size()-1;
        int id = nums.size()-1;
        vector<int>ans(nums.size());
            while(left<=right){
                int l=nums[left]*nums[left];
                int r=nums[right]*nums[right];
                if(l>r){
                    ans[id]=l;
                    left++;
                }
                else{
                    ans[id]=r;
                    right--;
                }
                id--;
            
        }return ans;

    }
};