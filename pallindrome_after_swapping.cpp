#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string s1="aamalylamsss";
    unordered_map<char,int> umap;
    int oddcount=0;
    for(auto x : s1){
        umap[x]++;
    }
    bool check_odd=true;
    for(auto it=umap.begin();it!=umap.end();it++){
        if((it->second)%2==0){
            continue;
        }
        else{
            if(check_odd==true){
                oddcount++;

                break;
            }
                
            
        }
    }
    if(oddcount==1){
        cout<<"YES";
    }
}