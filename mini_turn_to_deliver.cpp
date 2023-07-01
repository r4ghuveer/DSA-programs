#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    vector<int> ans={10,20,100,80,40,30};
    sort(ans.begin(),ans.end());
    vector<vector<int>> ans1;
    vector<int> temp(2,0);
    int a=0;
    int z=ans.size()-1;
    while(a<z){
        temp[0]=ans[a];
        temp[1]=ans[z];
        ans1.push_back(temp);
    
        a++;
        z--;
    }
    if(a==z){
        temp[0]=ans[a];
        ans1.push_back(temp);
        temp.clear();
        }   
    for(int i=0;i<ans1.size();i++){
            cout<<"( ";
        for(int j=0;j<ans1[0].size();j++){
            cout<<ans1[i][j]<<" ";
            
        }
        cout<<")";
    }


}