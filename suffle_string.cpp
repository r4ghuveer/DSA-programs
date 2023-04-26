class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int siz = indices.size();
        string ans(siz,'-');
        int i=0;
        for(auto x : indices){
            ans[x]=s[i];
            i++;
        } 
        return ans;
        
    }
};