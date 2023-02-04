class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(auto x : nums){
            int count=0;
            int y=0;
            
            if(x/10==0){
                ans.push_back(x);
            }
            else{
                int y=x;
                while (y>0){
                    count++;
                    y=y/10;
                }
                int n=x;
                for(int i=count;i>0;i--){
                    if(i==1){
                        ans.push_back(n);
                    }
                    else{
                        int div=pow(10,i-1);
                        n=n/div;
                        ans.push_back(n);
                        n=x%div;
                    }
                    
                }
                
            }
            
                        
        }
        return ans;
    }
};