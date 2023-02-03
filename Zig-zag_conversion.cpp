class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){return s;}
        int inc=0;
        string ans="";
        for(int i=0;i<numRows;i++){
            inc=2*(numRows-1);
            for(int j=i;j<s.size();j+=inc){
                ans+=s[j];
                if(i>0 && i<numRows-1 && j+inc-2*i < s.size()){
                    ans+=s[j+inc-2*i];
                }
            }
        }
        return ans;
     }     
};