class Solution {
public:
    int characterReplacement(string s, int k) {
        int high=0;
        int low=0;
        int res=INT_MIN;
        int maxDiff=0;
        int maxfreq=0;
        unordered_map<char,int>f;
        for(high;high<s.size();high++){
            f[s[high]]++;
            maxfreq=max(maxfreq,f[s[high]]);
            int len = high-low+1;
            maxDiff=len-maxfreq;
            while(maxDiff>k){
                f[s[low]]--;
                if(f[s[low]]==0){
                    f.erase(s[low]);
                    
                }low++;
                len = high-low+1;
                    maxDiff=len-maxfreq;
            }
            len = high-low+1;
            res=max(res,len);
        }
        return res;

    }
};