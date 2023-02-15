class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        for (int i = A.size() - 1; i >= 0 && K > 0; --i) {
            A[i] += K;
            K = A[i] / 10;
            A[i] %= 10;
        }
        while (K > 0) {
            A.insert(A.begin(), K % 10);
            K /= 10;
        }
        return A;
        // vector<int> ans(num.size()+1,-1);
        // int n=ans.size();
        // int carry=0;
        // int sum=0;
        // int l=0;
        // for(int i=n;i>=0;i++){
        //     l=k%10;
        //     sum=carry+num[i]+l;
        //     l=l/10;
        //     ans[i]=sum%10;
        //     carry=sum/10;
        // }
        // vector<int>:: iterator it=ans.begin();
        // int i=0;
        // while(ans[i]==-1){
        //     ans.erase(it);
        //     it++;
        //     i++;
        // }
        // return ans;
    }
};