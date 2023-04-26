class Solution {
public:
    vector<string> cellsInRange(string s) {
        int i, j;
        vector<string> ans;
        string temp = "";
        string temp2 = "";
        
        for(i=s[0] ; i<=s[3] ; i++)
        {
            temp += (char)(i);
            for(j=s[1] ; j<=s[4] ; j++)
            {
                temp2 += temp;
                temp2 += (char)(j);
                ans.push_back(temp2);
                temp2.clear();
            }
            temp.clear();
        }
        return ans;
    }
};