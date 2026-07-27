class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>f;
        int zero=0;
        int one=0;
        int result = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }
            else{
                one++;
            }
            int diff=zero-one;
            if(diff==0){
                result=max(result,i+1);
                continue;
            }
            if(f.find(diff)==f.end()){
                f[diff]=i;
            }
            else{
                int index = f[diff];
                int len = i-index;
                result = max(result,len);
            }
        }return result;
    }
};