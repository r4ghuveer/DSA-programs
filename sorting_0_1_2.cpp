// sort colors 0 1 2
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int mid=0,high=nums.size()-1,low=0;
        while(mid<=high){
            if(nums[mid]==0){
                nums[mid]=nums[low]; //swapping
                nums[low]=0; // we know that nums[mid]=0 so no need for extra variable (temp) for swapping 
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                nums[mid]=nums[high]; //swapping
                nums[high]=2; // same as above
                high--;
            }
        }
    }
};