#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> inp={3,2,1,7,5,4};
    int mini=-1;
    int eve=0;
    int odd=0;
    int seceve=0;
    int secodd=0;
    for(int i=0;i<inp.size();i++){
        if(inp[i]%2==0){
            if(inp[i]<eve){
                seceve=inp[i];
            }
            else{
                seceve=eve;
            }
            eve=max(eve,inp[i]);
        }
        else{
            if(inp[i]<odd){
                secodd=inp[i];
            }
            else{
                secodd=odd;
            }
            odd=max(odd,inp[i]);
        }
    }
    cout<<seceve+secodd;
}