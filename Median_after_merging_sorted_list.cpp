#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> answer;
    vector<int> nums1={1,5};
    vector<int> nums2={3,6};
    int len1=nums1.size();
    int len2=nums2.size();
    for(int i=0; i<len1;){
        for(int j=0; j<len2;){
            if(nums1[i]<=nums2[j]){
                answer.push_back(nums1[i]);
                i++;
                if(i==len1){
                    answer.insert(answer.end(),nums2.begin()+j,nums2.end());
                    break;
                }
                
            }
            else{
                answer.push_back(nums2[j]);
                j++;
                if(j==len2){
                    answer.insert(answer.end(),nums1.begin()+i,nums1.end());
                    break;
                }
            }
        }
    }
    int L = answer.size();
    float median;
    int left=(L/2)-1;
    int right=(L/2);
    if(L%2==0){
        median=(answer[left]+answer[right])/2;

    }
    else{
        median=answer[((L+1)/2)-1];
    }
    for(auto x: answer){
        cout<<x<<endl;
    }
    cout<< median;
}

