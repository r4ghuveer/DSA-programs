#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        return recursive(nums, low, high, target);
    }
    int recursive(vector<int>& nums, int low, int high, int target) {
        if(low > high) return -1;
        int mid = (low + high) / 2;
        
        if(nums[mid] == target) return mid;
        
        if(target > nums[mid]) low=mid+1;

        if(target < nums[mid]) high=mid-1;
        return recursive(nums, low, high, target);
    }
};
int main(){
    int target=9;
    vector<int> nums={-1,0,1,2,9,10,12,14,15,16};
    Solution Obj;
    int a=Obj.search(nums,target);
    cout<<a;
}