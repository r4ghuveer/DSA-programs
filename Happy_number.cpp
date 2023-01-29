/*Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1*/
class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return true;
        int num=n;
        int x=n;
        unordered_map<int,int> umap;
        while(umap.find(num)==umap.end()){
            x=num;
            umap[num]++;
            num=0;
            while(x!=0){
                num+=(x%10)*(x%10);
                x=x/10;
            }
            if(num==1){
                return true;
            }
        }
        return false;
    }
};