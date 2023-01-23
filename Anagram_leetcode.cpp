#include <bits/stdc++.h> // this code doesn't work for s and p that is given below and similar examples
using namespace std;
int main(){
    string s="cbaebabacd";
    string p="abc";
    // int n=1;
    // vector<int> ans;
    // unordered_map<char,int> umap;
    // // unordered_map<char,int>:: iterator itr;
    // for(int i=0;i<p.size();i++){
    //     umap[p[i]]=0;
    // }
    
    
    // for(int j=0;j<s.size();j++){
    //     if(umap.find(s[j])!=umap.end() && j+p.size()-1<s.size()){
    //         // cout<<s[j]<<" ";
    //         string check = s.substr(j,p.size());
    //         for(auto x : check){
    //             if(umap.find(x)!=umap.end() && umap[x]==0){
    //                 umap[x]=1;
    //                 n=1;
    //             }
    //             else{
    //                 n=0;
    //                 break;
    //             }
    //         }
    //         if(n!=0){
    //             ans.push_back(j);
    //         }
    //         for(auto y : check){
    //             if(umap.find(y)!=umap.end()){
    //                 umap[y]=0;
    //             }
    //         }
    //     }
    // }
    // for (auto x : ans){
    //     cout<< x << " ";
    // }
    int s_len = s.length();
    int p_len = p.length();
        
    if(s.size() < p.size()) return {};
    
    vector<int> freq_p(26,0);
    vector<int> window(26,0);
    
    //first window
    for(int i=0;i<p_len;i++){
        freq_p[p[i]-'a']++;
        window[s[i]-'a']++;
    }
    
    vector<int> ans;
    if(freq_p == window) ans.push_back(0);
    
    for(int i=p_len;i<s_len;i++){
        window[s[i-p_len] - 'a']--;
        window[s[i] - 'a']++;
        
        if(freq_p == window) ans.push_back(i-p_len+1);
    }
    // for(auto x : ans){
    //     cout<<x<<" ";
    // }
    
}