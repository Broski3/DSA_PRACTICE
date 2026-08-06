class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.size();
        stack<pair<char,int>>st;
        string res;
        for(int i=0;i<n;i++){
            char c = s[i];
            if(!st.empty() && st.top().first == c){
                st.top().second++;
                if(st.top().second ==k){
                    st.pop();
                }
            }
            else{
                st.push({c,1});
            }
        } 
        while(!st.empty()){
            pair<char,int>p = st.top();
            st.pop();
            while(p.second--){
                res.push_back(p.first);
            }
        } reverse(res.begin(),res.end());
        return res;
    }
};