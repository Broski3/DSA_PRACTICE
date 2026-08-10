class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>freq;
        for(char ch:s){
            freq[ch]++;
        }
        bool isOdd=true;
        int ans =0;
        for(auto ch : freq){
            if(ch.second%2==0){
                ans+=ch.second;
            }
            else{
                isOdd=false;
                ans+=ch.second-1;
            }
        }
        if(isOdd==false){
            return ans+1;
        }
        else{
            return ans;
        }
    }
};