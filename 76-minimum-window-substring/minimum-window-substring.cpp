class Solution {
public:
    bool check(vector<int>&have, vector<int>&need){
        for(int i=0;i<256;i++){
            if(have[i]<need[i]){
                return false;
            }
        }return true;
    }
    string minWindow(string s, string t) {
        int low=0;
        int high=0;
        int len=0;
        vector<int>have(256,0);
        vector<int>need(256,0);
        int n= s.size();
        int m= t.size();
        int res=INT_MAX;
        int start=0;
        if(m>n){
            return "";
        }
        for(int i=0;i<m;i++){
            need[t[i]]++;
        }
        for(high;high<n;high++){
            have[s[high]]++;
            while(check(have,need)){
                len=high-low+1;
                if(res>len){
                    res=len;
                    start=low;
                }
                have[s[low]]--;
                low++;
            }
        }if(res==INT_MAX){
            return"";
        }
        else{
            return s.substr(start,res);
        }
      
    }
};