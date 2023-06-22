#include <iostream>
using namespace std;
int main(){
    int A;
    cin>>A;
    string ans="";
    for(int i=9;i>=2;){
        if(A==0){
            break;
        }
        if(A%i==0){
            A=A/i;
            ans.append(to_string(i));
        }
        else{
            i--;
        }
    }
    if(ans==""){
        cout<<"Impossible";
    }
    else{
        for(int i=ans.size()-1;i>=0;i--){
          cout<<ans[i]<<" ";
        }
    }
    
}