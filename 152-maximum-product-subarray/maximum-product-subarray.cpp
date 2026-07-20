class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd=nums[0];
        int minProd=nums[0];
        int result= nums[0];
        for(int i=1;i<nums.size();i++){
            int v1 = nums[i];
            int v2 = maxProd*nums[i];
            int v3= minProd*nums[i];
            maxProd=max(v1,max(v2,v3));
            minProd=min(v1,min(v2,v3));
            result=max(result,max(maxProd,minProd));
        }return result;
    }
};