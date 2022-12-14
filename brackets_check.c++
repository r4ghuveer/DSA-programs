#include <string>
#include <iostream>
using namespace std;

bool isValid(string s, int n) {
        string r;
        bool A=false;
        int L=s.size();
        for(int i=0;i<n;){
            if(s[i]==s[i+1]){
                A=true;
                i=i+2;
                continue;
            }
            else{
                r=r+s[i];
                i++;
            }
        }
        while(s!=""){
            n=r.size();
            isValid(r,n);
        }

        return A;
}
int main(){
    
    string s="({})";
    int n=s.size();
    cout<<isValid(s,n);
}