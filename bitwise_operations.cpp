#include <string>
#include <iostream>
using namespace std;

int bit(string op){
    int result=op[0]-'0';
    for(int i=1;i<op.size();i=i+2){
        if(op[i]=='B'){
            result=result || op[i+1]-'0';
        }
        else if(op[i]=='A'){
            result=result && op[i+1]-'0';
            
        }
        else{
            result=result ^ op[i+1]-'0';
        }
    }
    return result;
    
}

int main(){
    cout<<bit("1C0C1C1A0B1");
}