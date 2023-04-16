class Solution {
public:
    
    // [2,1,5,4,0,0]
    // NEXT PERMUTATAION
    // in assending : [2,4,0,0,1,5]
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    	if (k < 0) { //this means that the given array is the last permutation as it above loop run till last and didn't find any value less (arr[i]<arr[i+1]).
    	    reverse(nums.begin(), nums.end()); // so we reverse the array for 1st permutation
    	} else { // else we find smallest value to swap with the kth breakpoint index
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end()); // then make it the closest next permutataion.
        }
    }
};