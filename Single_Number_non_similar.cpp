class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        for(int j=1;j<nums.size();){
            int z=nums[j-1]^nums[j];
            if(z==0){
                j+=2;
                continue;
            }
            else{
                return(nums[j-1]);
            }
        }
        return nums[nums.size()-1];
    }
};