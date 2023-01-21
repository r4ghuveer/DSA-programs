#include <bits/stdc++.h>
using namespace std;
int main(){
string s="egg"; //e->a  g->d
string t="add";
if(s.size()!=t.size()){
    return false;
}
unordered_map <char,char> umap;
unordered_map <char,char> :: iterator itr=umap.begin();
for(int i =0; i<s.size();i++){
    if(umap.find(s[i])!=umap.end()){
        itr=umap.find(s[i]);
        if(t[i]!=itr->second){
            cout<< "false";
        }
    }
    else if(umap.empty()==false){
        for(auto x:umap){
            if(t[i]==x.second && s[i]!=x.first){
                return false;
            }
            else{
                umap[s[i]]=t[i];
            }
        }
    }
    else{
        umap[s[i]]=t[i];

    }

}
cout<< "true";
}
   