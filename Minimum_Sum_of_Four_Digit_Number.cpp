class Solution {
public:
    int minimumSum(int num) {
          vector<int>ans;
        int k=num;
        while(k!=0){
            
            ans.push_back(k%10);
            k=k/10;
            
        }
        sort(ans.begin(),ans.end());
        int sum=(ans[0]*10+ans[3])+ans[1]*10+ans[2];
        return sum;
    }
};