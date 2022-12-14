#include <vector>
#include <iostream>
using namespace std;
int main(){
    int target = 7;
    vector <int> nums {1,3,5,6};
    int mid;
    int start=0;
    int end = nums.size()-1;
    while(start < end){
        mid=(start+end)/2;
        
        
        
        if (nums[mid]==target){
            cout<<mid;
            break;
        }
        else if (target == nums[start]){
            cout<<start;
            break;
        }
        else if (target == nums[end]){
            cout<<end;
            break;
        }
        else if (mid==start || mid==end){
            cout<< start + 1;
            break;
        }
        else if(target<nums[mid]){
            end=mid;
            
        }
        else if(target>nums[mid]){
            start=mid;  
            
        }
        
       
    
}

}