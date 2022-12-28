#include <bits/stdc++.h>
using namespace std;
int main(){
    int k=3;
    vector<int> piles={1391,5916};
    sort(piles.begin(),piles.end());
    int sum=0;
    int back = piles.size()-1;
    sort(piles.begin(),piles.end());
    int times=k;
    if(piles.size()==1 && piles[0]==1){
        return piles[0];
    }
    for(int i=0;i<times;i++){
        if(piles.size()>=2){
            if(ceil(piles[back]/2)>=piles[back-1] && piles[back-1]){
                piles[back]=(piles[back]/4);
            }
            else{
                piles[back]=piles[back]-(piles[back]/2);
            }
            back--;
        }
        else{
            piles[back]=piles[back]-(piles[back]/2);
            
        }
    }
    for (auto x: piles ){
        sum+=x;
    }
    cout<< sum;
}