#include <bits/stdc++.h>
using namespace std;
int longestSubsequence(vector<int>& arr, int difference) {
    map<int,vector<int>> umap;
    for(int i=0;i<arr.size();i++){
        umap[arr[i]].push_back(i);
    }
    int check=0;
    int temp=0;
    int longest=1;
    int maxi=1;
    bool end=false;
    for(int i=0;i<arr.size();i++){
        temp=i;
        longest=1;
        while(temp<=arr.size()-1){
            end=false;
            if(umap.find(arr[temp]+difference)!=umap.end() ){
                for(auto x : umap[arr[temp]+difference]){
                    if(x > temp){
                        longest++;
                        temp=x;
                        end=true;
                        break;
                    }
                }
                if(end==false){
                    maxi=max(longest,maxi);
                    longest=1;
                    break;
                }
                
            }
            else{
                maxi=max(longest,maxi);
                longest=1;
                break;
            }
        } 
        maxi=max(longest,maxi);         

    }
    return maxi;
}
int main(){
    vector<int> arr={1,2,3,4,5,6,2,3};
    int diff=1;
    cout<<longestSubsequence(arr,diff);
}
