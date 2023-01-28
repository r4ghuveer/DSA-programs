#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#include <vector>
class Solution {
public:
    void findMedianSortedArrays(vector<int> nums1) {
        
        sort.(nums1.begin(),nums1.end());
        int n = nums1.size();
        
        if (nums1.size()%2!=0){
            cout<< nums1[n/2];
        }
        else{
            float n1 = floor(n/2)-1;
            float n2 = n1 + 1;
            
            float n3 = (float)(nums1[n1]+nums1[n2])/2;
            cout<< n3;
            // enter the number a
            // enter the nun
            
        }
    }
};
int main(){
    vector <int> nums1 {1,3};
    vector <int> nums2 {2};
    nums1.insert(nums1.end(),nums2.begin(),nums2.end());
    
    Solution obj;
    obj.findMedianSortedArrays(nums1);
}