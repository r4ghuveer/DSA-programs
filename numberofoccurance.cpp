#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    
    string si="abcdccfgg";
    string s[26]={};
    for (int i=0; i<sizeof(s)/sizeof(s[0]);i++){
        char ch=si[i];
        s[ch-'a']+=1;
    }
    for (int i=0; i<sizeof(s)/sizeof(s[0]);i++){
        cout<<s[i]<<endl;
    }
}