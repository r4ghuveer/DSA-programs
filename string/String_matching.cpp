#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;
int main(){
    string s="abcabcabcabc";
    bool A;
    int l;
    unordered_map <int,int> umap;
    string key;
    for(int i=1;i<s.size();){
        if(s.substr(0,i)==s.substr(i,i)){
            key=s.substr(0,i);
            
            umap[1]=i;
            break;
        }
        else{
            i+=1;
        }
    }
    

    if(s.size()%umap[1]==0){
        for(int i=0;i<s.size();){
            if(s.substr(i,umap[1])==key){
                A=true;
                i=i+umap[1];
                
            }
            else{
                A=false;
            }
            
        }
        
    }
    cout<< A;
}