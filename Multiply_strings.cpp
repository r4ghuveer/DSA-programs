class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        
        vector<int> res(num1.size()+num2.size(), 0);
        
        for (int i = num1.size()-1; i >= 0; i--) {
            for (int j = num2.size()-1; j >= 0; j--) {
                res[i + j + 1] += (num1[i]-'0') * (num2[j]-'0');
                res[i + j] += res[i + j + 1] / 10;
                res[i + j + 1] %= 10;
            }
        }
        
        int i = 0;
        string ans = "";
        while (res[i] == 0) i++;
        while (i < res.size()) ans += to_string(res[i++]);
        
        return ans;
        // This doesn't work for long integers .
        // unordered_map <char,int> umap;
        // unordered_map <char,int> :: iterator itr;
        // umap['0']=0;
        // umap['1']=1;
        // umap['2']=2;
        // umap['3']=3;
        // umap['4']=4;
        // umap['5']=5;
        // umap['6']=6;
        // umap['7']=7;
        // umap['8']=8;
        // umap['9']=9;
        // int n1=0;
        // int n2=0;
        // int n=0;
        // for (int i=0; i<num1.size();i++){
        //     n=umap[num1[i]];
        //     n1=n1*10+n;
        // }
        // n=0;
        // for (int i=0; i<num2.size();i++){
        //     n=umap[num2[i]];
        //     n2=n2*10+n;
        // }
        // string ans=to_string(n1*n2);
        // return ans;


    }
};