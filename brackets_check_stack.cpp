#include <stack>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    bool A=false;
    cout<<"Enter the String : - ";
    string s="";
    cin>>s;
    stack<char>  bracket;
    unordered_map<char,char> umap;
    umap['(']=')';
    umap['[']=']';
    umap['{']='}';
    for(int i=0;i<s.size();i++){
        if(s[i]=='{' || s[i]=='(' || s[i]=='['){
            bracket.push(s[i]);
        }
        else if(s[i]=='}' || s[i]==')' || s[i]==']'){
            if(s[i]==umap[bracket.top()]){
                bracket.pop();
            }
            else{
                cout<<"The String has INVALID parenthesis";
                A=true;
                break;
            }
        }
        else{
            continue;
        }
    }
    if(!A){
        cout<<"The String has VALID parenthesis";
    }
    
}