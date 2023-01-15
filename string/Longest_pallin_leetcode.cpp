#include <bits/stdc++.h>
using namespace std;
int main(){
    string s="aabbddeeex"; //abdeeedba 
    int evensum=0;
    int single=0;
    int firsttime=0;
    bool A=false;
    if(s.size()==1){
        cout<< 1;
    }
    unordered_map <char,int> umap;
    for(int i=0;i<s.size();i++){
        umap[s[i]]++;
    }
    for( auto x : umap){
        if(x.second % 2==0){
            evensum+=x.second;
        }
        else{
            if(x.second!=1){
                if(firsttime==1){
                    single+=x.second-1;
                }
                else{
                single+=x.second;
                firsttime=1;
                }
            }
            else if(x.second==1){
                A=true;
            }
        }
    }
    if(A==true && (evensum+single)%2 ==0){
        cout<< (evensum+single+1);
    }
    else{
        cout<< (evensum+single);
    }
    // int odds = 0;
    // for (char c='A'; c<='z'; c++)
    //     odds += count(s.begin(), s.end(), c) & 1;
    // return s.size() - odds + (odds > 0);
}
