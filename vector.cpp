#include <vector>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// int main(){
//     vector<int> lol{9};
//     lol.resize(2);
//     for(int i=lol.size();i>0;i--){
//         lol[i]=lol[i-1];
//     }
//     lol[0]=1;
//     for(auto x : lol){
//         cout<< x << " ";
//     }
//     cout<<lol.size();
// }
// int main(){
//     int arr[]={1,2,3};
//     cout<<sizeof(arr)/sizeof(arr[0]);
//     vector <int> vec(3) ;
//     vec[0]=1;
//     vec[1]=2;
//     cout<<size(vec);    
    

// }

// int main(){
//     vector <int> nums {0,0,1,1,1,2,2,2,3}
//     for (int i=0; i<6; i++){
//         int check = nums[i];
//         for (int j=i+1; j<6;j++){
//             if (nums[j]==check){
//                     nums.erase(nums.begin()+j);                   
//                     }
//                 }
                    
//             }
// }

int main(){
    vector <int> nums1 {1,6};
    vector <int> nums2 {4,2,3};
    nums2[2]=7;
    nums1.insert(nums1.end(),nums2.begin()+1,nums2.end());
    nums1.resize(0);
    cout<< nums1.size()<<endl;
    for (vector<int>:: iterator it = nums1.begin();it!=nums1.end();++it){
        cout<<*it<<endl;
    }

//     vector<int> nums={1,1,2};
//     int len=nums.size();
//     int i=1;
//     int k=0;
//     vector<int> :: iterator itr;
//     itr=nums.begin();
//     while(itr!=nums.end()){
//         if (nums[i]==nums[i-1]){
//             nums.erase(itr);
//             k=k+1;
            
            
            
            
            
//         }
//         else{
//             i++;
            
//             itr++;
//         }
        
        
//     }
//    cout<<nums.size()+1<<endl;
   
   
//     for (int j=0; j<nums.size();j++){
//         cout<<nums[j]<<endl;

// }
// int p=10^2;
// cout<<p;
}
