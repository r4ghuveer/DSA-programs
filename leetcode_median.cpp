#include <iostream>
#include <cmath>
using namespace std;
#include <vector>

int main(){
    vector <int> nums1 {1};
    vector <int> nums2 {3};
    nums1.insert(nums1.end(),nums2.begin(),nums2.end());
    
    int n=nums1.size();
    
    if (nums1.size()%2!=0){
            cout<< nums1[n/2];
        }
        else{
            int n1 = floor(n/2)-1;
            int n2 = n1 + 1;
            
            int n3 = (nums1[n1]+nums1[n2])/2;
            cout<<n3;
            
            
        }
}