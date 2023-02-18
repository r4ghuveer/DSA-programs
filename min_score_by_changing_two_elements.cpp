class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        int One =nums[len-3]-nums[0];
        int Two =nums[len-1]-nums[2];
        int Three =nums[len-2]-nums[1];
        int Final =min(One, min(Two,Three));
        return Final;
    }
};