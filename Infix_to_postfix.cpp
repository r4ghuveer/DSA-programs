#include <stack>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<char,int> umap;
    umap['+']=1;
    umap['-']=1;
    umap['/']=2;
    umap['*']=2;
    umap['^']=3;
    umap['(']=-1;
    umap[')']=-1;
    char A;
    stack<char> stack_exp;
    string s="";
    cout<<"enter the string";
    cin>>s;
    string ans="";
    for(auto x : s){
        if(umap.find(x)==umap.end()){
            ans.append(1,x);
        }
        else if(x=='('){
            stack_exp.push('(');
        }
        else if(x==')'){
            while(stack_exp.top()!='('){
                ans.append(1,stack_exp.top());
                stack_exp.pop();
            }
            stack_exp.pop();
        }
        else{
            if(!stack_exp.empty() && umap[x]<=umap[stack_exp.top()]){
                ans.append(1,stack_exp.top());
                stack_exp.pop();
            }
            stack_exp.push(x);

        }
        
    }
    
    while(!stack_exp.empty()){
        A=stack_exp.top();
        ans.append(1,A);
        stack_exp.pop();
    }
    cout<<ans;

}