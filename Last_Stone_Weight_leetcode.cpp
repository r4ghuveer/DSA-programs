#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> stones={7,6,7,6,9};
    
    sort(stones.begin(), stones.end(), std::greater<int>());
    int i=1;
    while(stones.size()!=1){
        if(stones[i]>stones[i-1]){
            stones[i]=stones[i]-stones[i-1];
            stones.erase(stones.begin()+(i-1));
            sort(stones.begin(), stones.end(), std::greater<int>());
        }
        else if(stones[i]<stones[i-1]){
            stones[i-1]=stones[i-1]-stones[i];
            stones.erase(stones.begin()+(i));
            sort(stones.begin(), stones.end(), std::greater<int>());
            
        }
        else{
            stones.erase(stones.begin()+(i));
            stones.erase(stones.begin()+(i-1));
            sort(stones.begin(), stones.end(), std::greater<int>());
        }
    }
    cout<< stones[0];
}