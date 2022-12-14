#include <iostream>
#include <assert.h>
#include <vector>
using namespace std;
class Solution {
    public:

        void remove(vector<int> nums) {
            
            int L=nums.size();
            vector <int> rep;
            for (int p=0;p<L;p++){
                int 
            }
            
            for (int i=0; i<L; i++){
                int check = nums[i];
                
                
                
                for (int j=i+1; j<L;j++){
                    if (nums[j]==check){
                        nums.erase(j);
                        
                        
                    }
                }
                    
            }
            int k;
            k=nums.size();
            cout<<k;
        }
};
int main(){
    vector <int> nums{0,0,1,1,1,2,2,3,3,3,4};
    Solution obj;
    
    obj.remove(nums);
}